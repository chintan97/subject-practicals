def find_dups(L):
	dups = []
	l = set(L)
	dups = [i for i in l if L.count(i) > 1]
	return dups
print (find_dups([1,2,3,4,1,2,3]))