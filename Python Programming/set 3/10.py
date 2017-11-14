n = input("Enter the number:")
rev = 0
for i  in n:                             #rev = n[::-1]       reverse the string
    rev = rev*10 + int(i)
if rev == int(n):
    print(n+" is a Pelindrome number")
else:
    print(n+" is not a Pelindrome number")