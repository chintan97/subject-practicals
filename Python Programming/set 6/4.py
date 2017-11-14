def is_ang(x):
    ang=0
    for i in str(x):
        ang=ang+int(i)**3
    if ang == x:
        return True
    return False
print(list(filter(lambda x: is_ang(x),range(int(input("Enter start for range:")),int(input("Enter end for range:"))+1))))