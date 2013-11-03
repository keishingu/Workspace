    #coding:utf-8

def pascla(low):
        list=[[1],[1,1]]
        if low==0 or low==1:
            return list
        while low-len(list):   
            for i in list[-1:]:
                counter = len(i)-1
                locallist = []
                for j in range(counter):
                    locallist.append(i[counter-1] + i[counter])
                    counter-=1
                locallist.append(1)
                locallist.insert(0,1)
                list.append(locallist)           

        return list

ans = pascla(30)
for i in ans:
        print i
