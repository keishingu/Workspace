# -*- coding: utf-8 -*-
import twitter
 
api = twitter.Api(
  consumer_key = '03qZsTOrjpcKnDotiwhC5g',
  consumer_secret = 'R9OYu68Wy6YgxmI8IbKPVIHrzeeANNmvjqvxPIXQE',
  access_token_key = '174199131-NjHUpyrCT0UuFhNkZxovpKpXVPynfLTRF3X6PjiX',
  access_token_secret = 'VRQwvPNPcCZwsCirK2X21iGLTk8Vdpmmc6Oy63bKY')

s = u"もう一回てすと"

api.PostUpdate(status=s)
