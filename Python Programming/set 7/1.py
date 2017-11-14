obj = open("test.txt","r")

r1 = obj.read()
print (r1)

print()
obj.seek(0)
r2 = obj.readlines()
for i in r2:
	print (i,end='')
	
print ("\n")
obj.seek(0)
while True:
	x = obj.readline()
	if not x == '':
		print (x,end='')
	if x == '' and obj.read() == '':
		break