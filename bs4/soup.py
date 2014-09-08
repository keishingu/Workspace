# coding: utf-8
import requests
import mechanize
from bs4 import BeautifulSoup

USERNAME = 'USERNAME'
PASSWORD = 'PASSWORD'

urltop = 'http://www.climbing-net.com' 
urllogin = 'https://www.climbing-net.com/login/'

br = mechanize.Browser()

br.open(urllogin)
br.select_form(nr=0)
br['log'] = USERNAME
br['pwd'] = PASSWORD
br.submit()

br.open(urltop)
bs = BeautifulSoup(br.response().read())
#h1要素を抽出
hello = bs.find(id="logged_text")
print(hello)

