n,q=input().split()
if n.isdigit() and q.isdigit():
	n=int(n)
	q=int(q)
	v=0
	a=input().split()
	for i in range(0,len(a)):
		if a[i].isdigit():
			v=v+1
	if v==len(a):
		l=[]
		m=[]
		for i in range(0,q):
			p=input().split()
			l.append(p)
		for i in range(0,len(l)):
			q=l[i]
			s=0
			if q[0].isdigit() and q[1].isdigit():
				for i in range(int(q[0])-1,int(q[1])):
					m.append(int(a[i]))
				for j in range(0,len(m)-1):
					xor=m[j+1]^m[j]
					m[j+1]=xor
				print(xor)
				m=[]
			else:
				continue
	else:
		print("invalid")
else:
	print("Invalid")
