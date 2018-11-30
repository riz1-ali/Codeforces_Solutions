n = int(input())
for i in range(0,n):
	l, r = [int(x) for x in raw_input().split()]
	sum=((r-l+1)*(r+l))/2
	if l%2 == 0:
		l+=1
	if r%2 == 0:
		r-=1
	n=((r-l)/2)+1
	sum -= (n)*(l+r)
	print(sum)