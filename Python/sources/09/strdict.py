# -*- coding: utf-8 -*-

"""
書籍にあるようにインタラクティブシェルでクラスを使うには，以下の手順で処理をしてください。

1. このファイルがあるディレクトリでPython(インタラクティブシェル)を起動します
2. シェルで「from strdict import StrDict」と入力します

"""


class StrDict(dict):
    """
    辞書型を継承してクラスを作る
    文字列だけをキーとして登録できる特殊な辞書クラス
    """
    def __init__(self):
        pass

    def __setitem__(self, key, value):
        """
        特殊メソッドをオーバーライド
        keyが文字列型以外なら例外を発生
        """
        if not isinstance(key, str):
            # キーが文字列でない場合には例外を発生
            raise ValueError("Key must be str or unicode.")
            # スーパークラスの特殊メソッドを呼び出し，キーと値を設定
        dict.__setitem__(self, key, value)
