#coding=utf-8
def accumulate(values):
    total = 0
    for v in values:
        if v < 0:
            raise ValueError("すべての要素は非0である必要があります")
            total += v
        return total
