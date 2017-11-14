def is_pos(x):
    if x>0:
        return True
    return False
print( list( filter( is_pos, map(int, input("Enter a list of integers:").split() ) ) ) )