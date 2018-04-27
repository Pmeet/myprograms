tcase=int(raw_input())
while(tcase>0):
	e=0
	sides=map(int,raw_input().split())
	for j in range(0,4,1):
		for k in range(j+1,4,1):
			if(sides[j]==sides[k]):
				e+=1
	if(e==3 or e==1 or e==0):
		print("NO")
	else:
		print("YES")
	tcase-=1			
