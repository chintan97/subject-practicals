obj = open("pr3.txt","r")
r = obj.readlines()
def skip_header():
	flag = 0
	for i in r:
		if flag == 1:
			print (i,end='')
		if i[0] == '#':
			flag = 1
			print (i[1:],end='')
skip_header()