n = int(input("Enter N to find factorial(N!):"))
fact = 1
for i in range(1, n+1):
    fact *= i
print(n,"! =",fact)