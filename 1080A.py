import math
n, r = [float(x) for x in raw_input().split()]
print(int(math.ceil((n*2)/r)+math.ceil((n*5)/r)+math.ceil((n*8)/r)))