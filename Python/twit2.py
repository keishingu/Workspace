import twitter

USER="k_shingu"
PASS="kexekexe1"

def print_users(users):
    for user in users:
        print "[%20s]: %s"%(user.screen_name, user.name)

api=twitter.Api(username=USER, password=PASS)

friends = api.GetFriends()
followes = api.GetFollowers()
print_users(friends)
print_users(followers)
