import twitter

CONSUMER_KEY = '03qZsTOrjpcKnDotiwhC5g'
CONSUMER_SECRET = 'R9OYu68Wy6YgxmI8IbKPVIHrzeeANNmvjqvxPIXQE'
ACCESS_KEY = '174199131-ddgdSao7zUDMBbv63SnafaMopRlYXifW7wDqOLWR'
ACCESS_SECRET = 'R4h1u1bgndCqNUI1On9Cs3dGaPRN2btru5b2XVi11D0'

api = twitter.Api(consumer_key = CONSUMER_KEY,consumer_secret = CONSUMER_SECRET,access_token_key = ACCESS_KEY,access_token_secret = ACCESS_SECRET)

def print_users(users):
    for user in users:
        print "[%20s]: %s" % (user.screen_name,user.name)
        #api = twitter.Api(consumer_key = CONSUMER_KEY,consumer_secret = CONSUMER_SECRET,access_token_key = ACCESS_KEY,access_token_secret = ACCESS_SECRET)

friends = api.GetFriends()
followers = api.GetFollowers()
print_users(friends)
print_users(followers)
