obj = open("pr4.txt","r")
B = obj.readlines()
A = [i for i in B if i != '-' and i != '-\n']
def minimum(A):
	min = int(A[0])
	for i in A:
		if min > int(i):
			min = int(i)
	return min
print (minimum(A))