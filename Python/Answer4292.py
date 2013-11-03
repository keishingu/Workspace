#coding:cp932
# Name: Clip_Example2.py
# Description: �V�F�[�v�t�@�C�� 1 ���V�F�[�v�t�@�C�� 2 �ŃN���b�v���܂��B

# ���W���[���̃C���|�[�g
import arcpy
from arcpy import env

# ���[�N�X�y�[�X�̐ݒ�
env.workspace = "C:/data"

# ���[�J���ϐ��̐ݒ�
in_features = "�V�F�[�v�t�@�C��1.shp"
clip_features = "�V�F�[�v�t�@�C��2.shp"
out_feature_class = "�V�F�[�v�t�@�C��1_Clip.shp"
xy_tolerance = ""

# �N���b�v�̎��s
arcpy.Clip_analysis(in_features, clip_features, out_feature_class, xy_tolerance)
