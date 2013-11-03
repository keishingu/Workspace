# coding=utf-8

"""
書籍にあるようにインタラクティブシェルでクラスを使うには，以下の手順で処理をしてください。

1. このファイルがあるディレクトリでPython(インタラクティブシェル)を起動します
2. シェルで「from prism import *」と入力します

"""


class Prism:
    """
    角柱を表現するためのクラス(単位を設定できる)
    """
    def __init__(self, width, height, depth, unit='cm'):
        """
        3辺の長さを渡して角柱インスタンスを初期化する
        """
        self.width = width
        self.height = height
        self.depth = depth
        self.unit = unit

    def content(self):
        """
        体積を計算して返す
        """
        return self.width*self.height*self.depth

    def unit_content(self):
        """
        体積を計算し，単位と一緒に文字列として結果を返す
        """
        return str(self.content()) + self.unit


class Cube(Prism):
    """
    立方体を表現するためのクラス
    """

    def __init__(self, length):
        """
        辺の長さを渡して立方体インスタンスを初期化する
        """
        Prism.__init__(self, length, length, length)
