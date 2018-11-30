import math
def func(n):
	d = int(math.sqrt(n))
	for i in range(2,d+1):
		if n%i==0:
			return i
	return n

n = int(input())
ans = 0
while n%2 :
	ans+=1;
	n -= func(n)
print(ans+int(n/2))
