# /usr/local/bin/python
# -*- coding: utf-8 -*-
 
import json
import urllib2
  
booklogID = "twol"
url = 'http://api.booklog.jp/json/%s' % booklogID
data = json.load(urllib2.urlopen(url))
tana = data["tana"]
books = data['books']
   
print tana["account"]
print tana["image_url"]
print tana["id"]
print tana["name"]
    
for book in books:
  print book['title']
  print book['asin']
  print book['author']
  print book['url']
  print book['image']
  print book['title']
  print book['height']
  print book['width']
  print book['catalog']
  print book['id']
