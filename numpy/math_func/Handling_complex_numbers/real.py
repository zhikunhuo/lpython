import numpy as np

a = np.array([1+2j, 3+4j, 5+6j])

print("real a: ", a.real)
a.real = 9
print("a: ", a)
a.real = np.array([9, 8, 7])
print("a: ", a)
print("real 1 + 1j: ", np.real(1 + 1j))