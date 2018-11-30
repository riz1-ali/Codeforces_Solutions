import math
n, r = [int(x) for x in raw_input().split()]
coin = 0 
for i in range(n,0,-1):
	rem = r/i
	coin += rem
	r -= rem*i
print(coin)