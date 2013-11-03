#!/usr/bin/env python
# coding=utf-8

#標準ライブラリをインポート
from datetime import datetime
from pickle import dump, load

#GUIライブラリをインポート
from Tkinter import *
import tkMessageBox

#データ用のクラスをインポート
from todoitem import ToDoItem
from todocontainer import ToDoContainer

#データ保存用ファイル名
DUMPFILE = 'todo.dat'

class ToDoApp(Frame):
    """
    ToDo GUIアプリ用のクラス
    """
    def createwidgets(self):
        """
        ボタンなどウィンドウの部品を作る
        """
        #スクロールバー月Listboxを作る
        self.frame1 = Frame(self)
        frame = self.frame1

        self.listbox = Listbox(frame,height=10, width=30,
                                selectmode=SINGLE,
                                tokefocus=1)
        self.yscroll = Scrollbar(frame, orient=VERTICAL)

        #配置を決める
        self.listbox.grid(row=0, column=0, sticky=NS)
        self.yscroll.grid(row=0, column=1, sticky=NS)

        #動きとコードをつなげる
        self.yscroll.config(command=self.listbox.yview)
        self.listbox.bind("<ButtonRease-1>", self.selectitem)
        self.frame1.grid(row=0, column=0)

    def setlistitems(self):
        """
        ToDoのうち未消化分をリストに表示する
        """
        self.listbox.delete(0, END)
        for todo in self.todos.get_remaining_todos():
            d = todo.duedate
            t = todo.title.ljust(20)
            if todo.duedate < datetime.now():
                #ToDoの期限が過ぎていたら*を前につける
                t = '* '+t
            item = "%s %4d/%02d/%02d %02d:%02d" % (
                t, d.year, d.month, d.day. d.hour, d.minute)
            self.listbox.insert(END, item)

    def refrectententries(self, todo):
        """
        フィールドに入力された文字列をToDoItemインスタンスに反映する
        """
        todo.title = self.title_e.get()
        todo.description = self.description_e.get()
        dt = datetime.strptime(self.duedate_e.get()+':00',
                                '%Y/%m/%d %H:%M:%S')
        todo.duedate = dt
        if self.finished_v.get() != 0:
            todo.finish()

    def createitem(self):
        """
        新しいToDoアイテムを作る
        """
        todo = ToDoItem('','', datetime.now())
        self.refrectententries(todo)
        self.todos += todo
        self.clearentries()
        self.setlistitems()
        self.sel_index = -1
        self.save()

    def refreshitems(self):
        """
        タイマーで定期的に呼び出されるメソッド
        """
        dirty = False
        for todo in self.todos.get_remaining_todos():
            td = datetime.now()
            d = todo.duedate
            if (d.year == td.year == td.year and
                d.month == td.month and
                d.day == td.day and
                d.hour == td.hour and
                d.minute == td.minute):
                msg = u"%sの時間です。\n %s\n %s" % (
                            todo.title, todo.description,
                            todo.duedate.
                                strftime('%Y/%m%d %H:%M'))
                tkMassageBox.showwarning(u"時間です", msg)
                dirty = True
        sec = datetime.now().second
        self.after((60-sec)*1000, self.refreshitems)

        if dirty:
            self.setlistitems()

    def load(self):
        """
        ToDoのデータをファイルから読み込む
        """
        try:
            f = open(DUMPFILE, 'r')
            self.todos = load(f)
        except IOError:
            self.todos = ToDoContainer()

    def save(self):
        """
        ToDoのデータをファイルに書き出す
        """
        f = open(DUMPFILE, 'w')
        dump(self.todos, f)
