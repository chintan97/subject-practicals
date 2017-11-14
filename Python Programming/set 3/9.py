n = input("Enter the number:")
ang = 0
for i  in n:
    ang += int(i)**3
if ang == int(n):
    print(n+" is an Armstrong number")
else:
    print(n+" is not an Armstrong number")