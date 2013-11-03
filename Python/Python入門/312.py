import csv

fh1 = open('list.csv', 'rb')

reader = csv.reader(fh1)

for row in reader:
    print(row[0])
    # row[1], row[2] ...

fh1.close()
