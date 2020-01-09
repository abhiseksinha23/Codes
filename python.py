n = int(input())
l = list(map(int, input().split())
l.sort()
i=0
j=n-1
x=0,y=0
while i<j:
	y += l[j]
	j = j-1
	x += l[i]
	i = i+1
if n%2!=0:
	y += l[j]
ans = x*x + y*y
print(ans) 

