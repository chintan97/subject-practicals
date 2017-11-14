def is_alpha(x):
    if x.isalpha():
        return True
    return False
print( list( filter( is_alpha, input("Enter a list of alphabets or numbers:").split() ) ) )