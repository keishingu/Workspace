# -*- coding: utf-8 -*-

import base64
import simplejson
import urllib2

from cgi import escape

# ツイッターアカウント
USERNAME = 'USERNAME'
PASSWORD = 'PASSWORD'

# Streaming APIのURL
STREAM_URL = 'http://stream.twitter.com/1/statuses/sample.json'

def is_japanese(text):
    """textにひらがなかカタナカが含まれていたら真を返す。"""
    def check_chr(x):
        return ((x >= 0x3040 and x <= 0x309f) or (x >= 0x30a0 and x <= 0x30ff))
    return [ch for ch in text if check_chr(ord(ch))]

def main():
    """ツイッターStreaming APIから読み込んだツイートを<li>でフォーマットして出力。
    動き始めると永遠に止まらないので、CTRL-C等でプロセスをkill。"""

    req = urllib2.Request(STREAM_URL, headers={
        'Authorization':
        'Basic %s' % (base64.encodestring('%s:%s' % (USERNAME, PASSWORD))[:-1])
    })

    ua = urllib2.urlopen(req)
    for line in ua:
        data = simplejson.loads(line)
        text = data.get('text')

        if text and is_japanese(text):
            print('<li>'
                  '<img src="%s" /> <a href="http://twitter.com/%s">%s</a> %s'
                  '</li>' %
                  (escape(data['user']['profile_image_url'].encode('utf-8', 'ignore')),
                   escape(data['user']['screen_name'].encode('utf-8', 'ignore')),
                   escape(data['user']['screen_name'].encode('utf-8', 'ignore')),
                   escape(data['text'].encode('utf-8', 'ignore'))))

if __name__ == '__main__':
    main()