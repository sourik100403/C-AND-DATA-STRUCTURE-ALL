def dup(str1):
    list1=[]
    c=[]
    for ch in str1:
        if ch in list1:
            list1.append('')
        else:
            list1.append(ch)
    for i in list1:
        c=','.join(i)
    print(c)
    print(list1)
dup("abba")