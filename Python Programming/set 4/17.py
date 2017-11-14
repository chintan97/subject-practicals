import collections
l = [1,[2,3],[4,5,[6,7]]]
def flatten(l):
	A=[]
	for el in l:
		if isinstance(el, collections.Iterable) and not isinstance(el, basestring):
			for sub in flatten(el):
				A.append(sub)
		else:
			A.append(el)
	return A
print flatten(l)