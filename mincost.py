x,y=input().split()
lenx=int(len(x))
len=len(y)
c=0
if(lenx<=len):
    for i in range(0,int(len)):
        if(i<lenx):
            if x[i] in y[i]:
                continue
            else:
                x=x[:i]+y[i]+x[i+1:]
                c=c+1
        else:
            x=x[:i+1]+y[i]
            c=c+1
else:
    s=lenx-int(len)
    x=x[:int(len)]
    for i in range(0,int(len)):
        if lenx>len:
            if x[i] in y[i]:
                continue
            else:
                x=x[:i]+y[i]+x[i+1:]
                c=c+1
print(c)
