def is_prime(n):
    if n is 2:
        return True
    elif n % 2 == 0:
        return False
    for i in range(3, int(n**0.5)+1, 2):
        if n % i == 0:
            return False
    return True
n = int(input("Enter n to find prime or not:"))
print(n,"is prime") if is_prime(n) else print(n,"is composite")