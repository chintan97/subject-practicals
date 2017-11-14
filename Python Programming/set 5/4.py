A = {
	4: {'cname': 'chintan', 'pno': [1,2,3], 'cat': ['bread','butter','milk'], 'price': [100,200,50]},
	31: {'cname': 'nandish', 'pno': [1,2], 'cat': ['bread','butter'], 'price': [100,200]},
	42: {'cname': 'das', 'pno': [1], 'cat': ['bread'], 'price': [100]},
}

B = []
c1, c2, c3, c4, c5 = 0, 0, 0, 0, 0
for i in A:
	if 'bread' in A[i]['cat']:
		c1 += 1
	if 'butter' in A[i]['cat']:
		c2 += 1
	if 'bread' in A[i]['cat'] and 'butter' in A[i]['cat']:
		c3 += 1
	if 'bread' in A[i]['cat'] and 'butter' not in A[i]['cat']:
		c4 += 1
	if 'bread' in A[i]['cat'] and 'butter' in A[i]['cat'] and 'milk' in A[i]['cat']:
		c5 += 1
		B.append(A[i]['cname'])

print (c1)
print (c2)
print (c3)
print (c4)
print (c5)
print (B)