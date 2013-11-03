#coding=utf-8

while True:
    try:
        x = 1.0 / float(raw_input("数字を入力してください："))
    except ValueError:
        print("入力した文字は数字ではありません")
    except ZeroDivisionError:
        print("0を入力することはできません")
    except:
        print("未知のエラーです")
        break
    else:
        print("逆数は %s です"%x)
        break
