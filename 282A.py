n=input()
x=0
while n>0 :
	y=raw_input();
	if y=="X++" or y=="++X" :
		x=x+1
	else :
		x=x-1
	n=n-1	
print(x)
