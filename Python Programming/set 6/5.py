def square(x): return x**2
def cube(x): return x**3
print(list(map(lambda x: square(x)+cube(x),range(int(input("Enter start for range:")),int(input("Enter end for range:"))+1))))