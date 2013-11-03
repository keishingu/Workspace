# -*- coding: utf-8 -*-
import twitter
import datetime

api = twitter.Api(
  cache = None,
  consumer_key = '03qZsTOrjpcKnDotiwhC5g',
  consumer_secret = 'R9OYu68Wy6YgxmI8IbKPVIHrzeeANNmvjqvxPIXQE',
  access_token_key = '174199131-NjHUpyrCT0UuFhNkZxovpKpXVPynfLTRF3X6PjiX',
  access_token_secret = 'VRQwvPNPcCZwsCirK2X21iGLTk8Vdpmmc6Oy63bKY')

# タイムゾーンの設定
class JST(datetime.tzinfo):
    def utcoffset(self, dt):
        return datetime.timedelta(hours=9)
    def dst(self, dt): 
        return datetime.timedelta(0)
    def tzname(self, dt):
        return 'JST'

# 残り時間の算出
teisyutsubi = datetime.datetime(2012,1,21,23,59,tzinfo=JST())
ima = datetime.datetime.now(JST())
nokorijikan = teisyutsubi - ima

# tweet
text = u"卒プロ成果登録締め切りまで あと" + str(nokorijikan.days) + u"日 #sfc_sotsupro"

api.PostUpdate(status=text)
