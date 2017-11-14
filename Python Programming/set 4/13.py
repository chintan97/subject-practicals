a=input("list1=").split()
b=input("list2=").split()
def check(a,b):
	if len(set(a) & set(b))>=1:
		return True
	else:
		return False
print(check(a,b))