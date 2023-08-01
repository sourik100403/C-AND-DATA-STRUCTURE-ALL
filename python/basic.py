# print("sourik","suraj",end=" ")
# print("suraj")
# a=1
# b="sourik"
# c=1.4
# print("a=",type(a))
# print("b=",type(b))
# print("c=",type(c))
# a=str(a)
# b=str(b)
# c=int(c)
# print(type(a))
# print(type(b))
# print(type(c))
# x=17
# y=11
# print(id(x))
# print(id(y))
# list1=[1,4.6,"gjhqgsfhg",7872,88.88,989,9.9]
# print(list1)
# print(type(list1))
# print(list1[1])
# print(list1[1:2:6])
# print(list1*2)
# list1[3]="sourik"
# print(list1)
# list1=(1,4.6,"gjhqgsfhg",7872,88.88,989,9.9)
# print(list1)
# print(type(list1))
# print(list1[1])
# print(list1[1:2:6])
# print(list1*2)
# list1[3]="sourik"
# print(list1)
# mudict={"name":"sourik","age":19}
# print(mudict)
# print(mudict["name"])
# print(mudict.keys())
# print(mudict.values())
''' string'''
# mystring="sourik is a good boy 897"
# print(mystring)
# print(len(mystring))
# print(mystring[::2])
# print(mystring.isalnum())
# print(mystring.endswith("j"))
# print(mystring.count("s"))
# print(mystring.capitalize())
# print(mystring.find(" "))
# print(mystring.lower())
# print(mystring.replace("is","are"))
''' set '''
# s=set("")
# l=[1,2,"sourik"]
# myset=set(l)
# print(myset)
# s.add(1)
# s.add(2)
# print(s)
# s1=s.union({1,2,3,2})
# print(s1)
# s2=s.intersection({1,2})
# print(max(s))
# print(min(s))
# s.remove(2)
# print(s)
# import math
# print(pow(4,2))
# print(4**2)
# year=int(input("enter the year"))
# if(((year%4==0) and (year%100!=0)) or (year%400==0)):
#     print(f"{year} is the leap year")
# else:
#     print(f"{year} not a leap year")
# print(f"{year} is leap year") if(((year%4==0) and (year%100!=0)) or (year%400==0)) else print(f"{year} is not leap year")
# i=1
# while(i<=10):
#     print(i,end=" ")
#     i=i+1
# sum=0
# i=1
# while(i<=10):
#     sum=sum+i
#     i=i+1
# print(sum)
# avg=sum/10
# print(avg)
# i=1
# fact=1
# n=int(input("enter the number "))
# while(i<=n):
#     fact=fact*i
#     i+=1
# print(fact)
# sum=0
# num=int(input("enter the number"))
# while(num>0):
#     r=num%10
#     sum=sum+r
#     num=num//10
# print(sum)
# rev=0
# num=int(input("enter the number"))
# while(num>0):
#     r=num%10
#     rev=rev*10+r
#     num=num//10
# print(rev)
# for i in range(2,20,2):
#     print(i)
# n=5
# fact=1
# for i in range(1,n+1):
#     fact=fact*i
#     i+=1
# print(fact)
f=0
num=int(input("enter the number"))
for i in range(2,num//2+1):
    if(num%i==0):
        f=1
        break
if(f==0):
    print("prime number")
else:
    print("not prime")




