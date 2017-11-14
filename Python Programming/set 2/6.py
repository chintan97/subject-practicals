degree = input("Enter the degree:")
experi = int(input("Enter the experience:"))
print("Salary is: ",end="")
if degree == 'B.E.':
	print ("30000" if experi < 5 else "40000")
elif degree == 'M.E.':
	print ("50000" if experi < 5 else "60000")