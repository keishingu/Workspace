# -*- coding: utf-8 -*-
import twitter
import datetime
 
api = twitter.Api(
  consumer_key = '03qZsTOrjpcKnDotiwhC5g',
  consumer_secret = 'R9OYu68Wy6YgxmI8IbKPVIHrzeeANNmvjqvxPIXQE',
  access_token_key = '174199131-NjHUpyrCT0UuFhNkZxovpKpXVPynfLTRF3X6PjiX',
  access_token_secret = 'VRQwvPNPcCZwsCirK2X21iGLTk8Vdpmmc6Oy63bKY')

teisyutsubi = datetime.date(2012,1,21)
kyou = datetime.date.today()
nokorijikan = teisyutsubi - kyou
#nokorijikan_text = print(nokorijikan)
#nokorijikan_text = nokorijikan.strftime('%d')
text = u"卒業論文提出日まで あと" + str(nokorijikan.days) + u"日"

#s = u"てすてす" + kyou
#t = print(kyou)

api.PostUpdate(status=text)
