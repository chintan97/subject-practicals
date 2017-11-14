def CtoF(x): return (x-32)/1.8
print( list( map( CtoF, map(int, input("Enter a list of integers:").split() ) ) ) )