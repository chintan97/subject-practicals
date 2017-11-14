prime = []
N = int(input("Enter N:"))
i = 2
if N >= 2:
	prime.append(2)
while i <= N:
	div = 2
	flag = 1
	while div <= (i/2)+1:
		if i%div == 0:
			flag = 0
			div = i
		div += 1
	if flag == 1:
		prime.append(i)
	i += 1
for i in prime:
	print (i)