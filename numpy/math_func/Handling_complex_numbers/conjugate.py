import numpy as np

print("conjugate 1+2j: ", np.conjugate(1+2j))
x = np.eye(2) + 1j * np.eye(2)
print("x: ", x)
print("conjugate x: ", np.conjugate(x))