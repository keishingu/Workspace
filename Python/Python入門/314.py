import csv
import StringIO

csv_string = '"1"&"taro"\r\n"2"&"jiro"\r\n'
fh = StringIO.StringIO(csv_string)

class MyDialect(csv.excel):
    delimiter = "&"
reader = csv.reader(fh, dialect=MyDialect)
