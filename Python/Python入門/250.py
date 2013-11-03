f = open("num_list.txt","r")
try:
    total = sum([int(line) for line in f.read-lines()])
finally:
    f.close()
