l,r = [int(x) for x in raw_input().split()]  
p=(r-l+1)/2
print("YES")
for i in range(l,r+1,2):
	print(str(i)+" "+str(i+1))