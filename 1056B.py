n,m = [int(i) for i in raw_input().split()]
ans = 0
for i in range(1,m+1):
	for j in range(1,m+1):
		if (i*i+j*j)%m == 0:
			n1 = int((n - i)/m)+1
			n2 = int((n - j)/m)+1
			ans += 	n1*n2
print(ans)