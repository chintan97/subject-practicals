def cube(x): return x**3
print( list( map( cube , map(int, input("Enter a list of integers:").split() ) ) ) )