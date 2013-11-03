#coding:cp932
# Name: Clip_Example2.py
# Description: シェープファイル 1 をシェープファイル 2 でクリップします。

# モジュールのインポート
import arcpy
from arcpy import env

# ワークスペースの設定
env.workspace = "C:/data"

# ローカル変数の設定
in_features = "シェープファイル1.shp"
clip_features = "シェープファイル2.shp"
out_feature_class = "シェープファイル1_Clip.shp"
xy_tolerance = ""

# クリップの実行
arcpy.Clip_analysis(in_features, clip_features, out_feature_class, xy_tolerance)
