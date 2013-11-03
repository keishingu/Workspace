try:
    x = 1/0
except ZeroDivisionError, instance:
    print(instance)
