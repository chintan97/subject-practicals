A = [int(x) for x in input("Enter list:").split()]
print ("Palindrome" if A==A[::-1] else "Not palindorme")