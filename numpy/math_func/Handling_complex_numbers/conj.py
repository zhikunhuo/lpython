import numpy as np

print("conj 1+2j: ", np.conj(1+2j))
x = np.eye(2) + 1j * np.eye(2)
print("x: ", x)
print("conj x: ", np.conj(x))