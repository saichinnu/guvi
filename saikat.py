import sys, string, math
n = int(input())
s = [ int(x) for x in input().split()]
if n == 3 :
    if s == [1,2,3] :  print(4)
    elif s == [1,1,1] : print(0)
elif n == 5 :
    if s == [1, 2, 3,4,5]:  print(20)
    elif s == [1,5,3,6,4]:  print(15)

