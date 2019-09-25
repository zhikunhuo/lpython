import numpy as np

def f(x,y):
    return 10*x+y
    
b = np.fromfunction(f,(5,4),dtype=int)
print("b: ", b)
print("b[2,3]: ", b[2,3])
print("b[0:5, 1]: ", b[0:5, 1])
print("b[ : ,1]: ", b[ : ,1])
print("b[1:3, : ]: ", b[1:3, : ])

for row in b:
    print(row)