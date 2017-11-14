cha = input("Enter a character:")
if cha.isdigit():
    print(cha,"is digit")
elif cha.isalpha():
    print(cha,"is alphabet")
else:
    print(cha,"is special character")