import functools
print(functools.reduce(lambda a, b: a if a>b else b, map(int, input("Enter a list of integers:").split())))