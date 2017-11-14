n = int(input("Enter the number:"))
for i in range(2, n+1, 2):
    if i % 6 != 0:
        print(i, end=" ")