collection={'a':1,'b':2}
for key in ('a','b','c'):
    try:
        value = collection[key]
    except KeyError:
        print('miss %s' %key)
    else:
        print('hit %s:%s'%(key, value))
