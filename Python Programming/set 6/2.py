import functools
print(functools.reduce(lambda x, y: x+y,range( int(input("Enter start for range:")) , int(input("Enter end for range:"))+1 )))