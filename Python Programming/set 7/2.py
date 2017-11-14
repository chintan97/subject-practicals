obj1 = open("file1.txt","r")
obj2 = open("file2.txt","w")
r = obj1.readlines()
for i in r:
	a, b = [int(x) for x in i.split()]
	obj2.write(str(a)+" "+str(b)+" "+str(a+b)+" "+str(a*b)+"\n")