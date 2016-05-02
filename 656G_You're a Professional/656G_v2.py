f,n,t=map(int,input().split())
l=0;v=[0]*n
for i in range(f):
	c=input()
	for j in range(n):
		if v[j]<t:
			if c[j]=='Y':
				v[j]+=1;
				if v[j]==t:
					l+=1
print(l)
#kitten