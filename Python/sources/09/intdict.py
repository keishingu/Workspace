# -*- coding: utf-8 -*-


class IntDict(dict):
    """
    辞書型を継承してクラスを作る
    数値だけをキーとして登録できる特殊な辞書クラス(練習問題に)
    """
    def __init__(self):
        pass

    def __setitem__(self, key, value):
        """
        特殊メソッドをオーバーライド
        keyが数値型以外なら例外を発生
        """
        if not isinstance(key, int):
            # キーがint型でない場合には例外を発生
            raise ValueError("Key must be integer.")
            # スーパークラスの特殊メソッドを呼び出し，キーと値を設定
        dict.__setitem__(self, key, value)
