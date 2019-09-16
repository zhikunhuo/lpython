import numpy as np

A = np.array( [[1,1],
             [0,1]] )
             
B = np.array( [[2,0],
               [3,4]] )
print("A: ", A)
print("B: ", B)
print("A @ B: ", A@B)