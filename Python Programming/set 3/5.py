n = input("Enter number to find reverse:")
rev = ""
for d in n:
    rev = d+rev
print(int(rev))