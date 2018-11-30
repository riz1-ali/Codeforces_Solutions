l,r,a = [int(x) for x in raw_input().split()]
if l > r:
	t = min(a,l-r)
	a -= t
	r += t
if r > l:
	t = min(a,r-l)
	a -= t
	l += t
print(2*(int(a/2)+min(l,r)))