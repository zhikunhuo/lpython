import numpy as np

a = np.array([1+2j, 3+4j, 5+6j])

print("imag a: ", a.imag)
a.imag = np.array([9, 8, 7])
print("a: ", a)
print("real 1 + 1j: ", np.imag(1 + 1j))
