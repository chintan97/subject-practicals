obj = open("pr4.txt","r")
A = obj.readlines()
def minimum(A):
	min = int(A[0])
	for i in A:
		if min > int(i):
			min = int(i)
	return min
print (minimum(A))