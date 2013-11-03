# -*- coding: utf-8 -*-
from urllib import urlencode
from oauth2 import Client, Consumer, Token

consumer_key = '03qZsTOrjpcKnDotiwhC5g'
consumer_secret = 'R9OYu68Wy6YgxmI8IbKPVIHrzeeANNmvjqvxPIXQE'
user_key = '174199131-ddgdSao7zUDMBbv63SnafaMopRlYXifW7wDqOLWR'
user_secret = 'R4h1u1bgndCqNUI1On9Cs3dGaPRN2btru5b2XVi11D0'

client = Client(Consumer(consumer_key, consumer_secret),
                Token(user_key, user_secret))
client.request('http://api.twitter.com/1/statuses/update.xml',
               'POST',
               urlencode({'status':'こんにちは'}))