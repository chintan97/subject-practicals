import math
A = [1,2,3,4,5,6,7,8,9,10]
n = int(input("Enter n:"))
x = math.ceil(len(A)/n)
print (x)
B = [[0 for i in range(n)] for j in range(x)]
flag = 0
for i in range(x):
	for j in range(n):
		B[i][j] = A[flag]
		flag += 1
print (B)