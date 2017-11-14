mat1 = [
	[1,2,3,4],
	[5,6,7,8],
	[9,10,11,12],
]
mat2 = [
	[1,2,3,4],
	[5,6,7,8],
	[9,10,11,12],
]
print ([[mat1[i][j]+mat2[i][j] for j in range(4)] for i in range(3)])