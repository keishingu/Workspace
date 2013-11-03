# coding=utf-8

def guess_encoding(s):
    """
    マルチバイト文字列を引数として受け取り，エンコードを簡易に判定する
    Python 2.4以上を使うか，JapaneseCodecsをインストールして使います
    """
    #判定を行うエンコードをリストに保存
    encodings = ["ascii", "utf-8", "shift-jis", "euc-jp" ]
    for enc in encodings:
        try:
            unicode(s, enc) # codecsを使ってエンコード変換を試みる
            break           # エラーが発生しなかったらループを抜け出す
        except UnicodeDecodeError,e:
            enc = ""        # エンコード変換に失敗したので次を試す
    return enc              # 変換に成功したエンコードを返す

if __name__ == '__main__':
    # エンコード判定のテスト
    s = u"日本語の文章"
    for e in ['euc-jp', 'shift-jis', 'utf-8']:
        print e, guess_encoding(s.encode(e))


