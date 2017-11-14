x, y, z = map(int, input("Enter 3 numbers:").split())
if x >= y:
    print(x,"is maximum") if x >= z else print(z,"is maximum")
else:
    print(y,"is maximum") if y >= z else print(z,"is maximum")