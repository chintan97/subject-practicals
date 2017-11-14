lst = [int(x) for x in input("Enter some numbers:").split()]
lst.sort()
print(list(set(lst))[-2])