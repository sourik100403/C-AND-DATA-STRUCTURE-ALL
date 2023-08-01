# for i in range(1,4):
#     for j in range(5):
#         print("*",end=" ")
#     print("\n")
# for i in range(1,5):
#     for j in range(1,i+1):
#         print("*",end=" ")
#     print("\n")
# n=8
# count=1
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print(count,end=" ")
#         count=count+1
#     print()\
# n=5
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print(i,end=" ")
#     print()
# n=int(input("enter the number"))
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         if(j%2==0):
#             print(0,end=" ")
#         else:
#             print(1,end=" ")
#     print()
# n=4
# for i in range(1,n+1):
#     for j in range(1,n-i-1):
#         print(end=" ")
#     for k in range(1,i+1):
#         print("*")
#     print()
# def func(i):
#     print(i*i)
#     ''' thhis is a doc message'''
#     print(i)
# func(3)
# print(func.__doc__)
# number=1879882897987
# number=str(number)
# print(number[1])
# print(type(number))
# mystr='this is python'
# print(mystr)
# print(mystr[2::2])
# print(mystr[::-1])
# print(mystr.title())
# print(mystr.swapcase())
# mystr="      good j,hskjdh jdskjh bkufrk       "
# print(mystr)
# print(mystr.strip())
# print(mystr.lstrip())
# print(mystr.rstrip())
# print(mystr.strip("good"))
# mystr="_____  good is thonk good _____"
# print(mystr)
# print(mystr.strip("_"))
# print(mystr.lstrip("_"))
# print(mystr.rstrip("_"))
# print(mystr.strip("good"))
# str="python"
# print(max(str))
# print(min(str))
# str="god is great"
# str1="gia"
# str2="hpz"
# myfriend=("ss","yugj","hjdh")
# name="#".join(myfriend)
# print(name)
# def div_by_3(x):
#     if(x%3==0):
#         return 1
# list1=list(filter(div_by_3,range(2,22)))
# print(list1)
# def mul_two(x):
#     return x*2
# list1=[1,2,3,4,55]
# list2=list(map(mul_two,list1))
# print(list2)
# def add(x,y):
#     return x+y 
# list1=[1,2,3,4,5,88,9]
# list2=[1,2,3,4,5,9]
# list3=list(map(add,list1,list2))
# print(list3)
# import functools
# def add(x,y):
#     return x+y 
# list1=[1,2,3,3,4,5]
# list2=functools.reduce(add,list1)
# print(list2)
# import random
# list1=[]
# for i in range(10):
#     n=random.randint(1,2)
#     list1.append(n)
# print(list1)
# list1=set()
# for i in range(1,10):
#     n=random.randint(1,10)
#     list1.add(n)
# print(list1)
# from ast import main
# import math
# import random
# def generateotp():
#     digit='0123456789'
#     otp=""
#     for i in range(6):
#         otp+=digit[math.floor(random.random()*10)]
#     return otp
# if __name__=='__main__':
#     print(generateotp())
#     print(random.random()*10)
# import math
# print(math.sqrt(9))
# from math import sqrt as sqar_root
# print(sqar_root(9))
