L1 = [{1:'A', 2:'B'}, {3:'C', 4:'D'}, {}]
L2 = [{}, {}]
print(all(not d for d in L1))
print(all(not d for d in L2))