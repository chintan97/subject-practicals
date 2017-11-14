str_lst = input("Enter strings:").split()
n = int(input("Enter n:"))
longer_str = [s for s in str_lst if len(s)>n]
print(longer_str)