n,p,q,r=input().split()
p=int(p)
q=int(q)
r=int(r)
n=int(n)
a=[int(i) for i in input().split()]
h=0
sum=[0]*int(n*100)
for i in range(len(a)):
    for j in range(i,len(a)):
        for k in range(j,len(a)):
            h=h+1
            sum[h]=p*a[i]+q*a[j]+r*a[k]
 
max=int(sum[0])
for i in range(len(sum)):
    if max<sum[i]:
        max=sum[i]
 
print(max)
