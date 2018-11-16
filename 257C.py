import math as m
pi = m.acos(-1)
n = int(input())
angle = list()
for i in range(0,n):
	x,y = raw_input().split()
	x = float(x)
	y = float(y)
	angle.append(m.atan2(x,y))
angle.sort()
ans = float(0)
for i in range(1,n):
	ans = max(ans,angle[i]-angle[i-1])
t_ans = angle[0] - angle[n-1]
if t_ans < .0000001 : 
	t_ans += 2*pi
ans = max(ans,t_ans)
print('%.10f'%(360-(ans*180/pi)))