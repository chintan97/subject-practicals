def is_prime(x):
    if x==2 : return True
    if x % 2 == 0: return False
    if x>2:
        for i in range(3, int(x**0.5)+1, 2):
            if x % i == 0:
                return False
        return True
print(list(filter(lambda x: is_prime(x),range(int(input("Enter start for range:")),int(input("Enter end for range:"))+1))))