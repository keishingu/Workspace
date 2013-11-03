# -*- coding: utf-8 -*-
import twitter
 
api = twitter.Api(
  consumer_key = '03qZsTOrjpcKnDotiwhC5g',
  consumer_secret = 'R9OYu68Wy6YgxmI8IbKPVIHrzeeANNmvjqvxPIXQE',
  access_token_key = '174199131-NjHUpyrCT0UuFhNkZxovpKpXVPynfLTRF3X6PjiX',
  access_token_secret = 'VRQwvPNPcCZwsCirK2X21iGLTk8Vdpmmc6Oy63bKY')

replies = api.GetReplies()
reply_name = replies[0].user.screen_name
reply_text = "@" + "k_shingu" + " " + u"りぷらい!"
reply_to = replies[0].id
api.PostUpdate(
  status=reply_text,
  in_reply_to_status_id=reply_to)
