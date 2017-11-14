A = [int(x) for x in input("Enter list:").split()]
for i in A:
	if i%2 == 0:
		A.remove(i)
for i in A:
	print (i)