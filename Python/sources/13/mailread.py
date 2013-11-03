# -*- coding: utf-8 -*-

from email.Header import Header,make_header,decode_header
import email

def mailread(src):
    """生メールから件名，本文，添付ファイル(画像)を取り出す
    """
    # Messageオブジェクトを作る
    m = email.message_from_string(src)
    # ヘッダをデコード
    subj = decode_header(m["Subject"])
    # ヘッダを表示
    try:
        print unicode(make_header(subj))
    except: pass;
    print "-"*70
    # 全パートをスキャン
    for part in m.walk():
        type = part.get_content_maintype()   # maintypeを得る
        if type and type.find("image") != -1:
            # 画像の添付が見つかったら，ファイルに保存
            filename = part.get_filename("notitle.img")
            f = open(filename,"wb")
            f.write(part.get_payload(decode=True))
            f.close()
        if type and type.find("text") != -1:
            # テキストは表示
            enc = part.get_charsets()[0] or "us-ascii"
            print part.get_payload().decode(enc,"ignore")

if __name__ == '__main__':
    import poplib
    
    s = poplib.POP3("host.to.mailserver")
    #s.apop()などを使って認証処理を実行(この行はご自身でカスタマイズしてください)
    for cnt in range(1,10):
        r = s.retr(cnt)            # インデックスを指定してメールを読み込む
        mailread("\n".join(r[1]))  # 本文を改行で連結して関数に渡す

