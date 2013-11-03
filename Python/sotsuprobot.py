# -*- coding: utf-8 -*-
import twitter
import datetime
 
api = twitter.Api(
  consumer_key = '03qZsTOrjpcKnDotiwhC5g',
  consumer_secret = 'R9OYu68Wy6YgxmI8IbKPVIHrzeeANNmvjqvxPIXQE',
  access_token_key = '421544093-bSF9IR4w0j38hS6ojszyrm1fLG3CuYGllcoHpiRv',
  access_token_secret = 'otvKkgnfqk8v1y6Stzyp75pF1qOC9loSZoPqLYPrC7k')

teisyutsubi = datetime.date(2012,1,21)
kyou = datetime.date.today()
nokorijikan = teisyutsubi - kyou
#debug
ima = datetime.datetime.now()

text = u"卒プロ成果登録締め切りまで あと" + str(nokorijikan.days) + u"日" + str(ima)

api.PostUpdate(status=text)
