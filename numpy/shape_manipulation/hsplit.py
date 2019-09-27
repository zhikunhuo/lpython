import numpy as np

a = np.floor(10* np.random.random((2, 12)))
print("Array a:", a)
print("**********")
print("Hsplit (a,3): ", np.hsplit(a,3))
print("**********")
print("Hsplit (a,(3,4)): ", np.hsplit(a,(3,4)))