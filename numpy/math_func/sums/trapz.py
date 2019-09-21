import numpy as np

print("trapz[1,2,3]: ", np.trapz([1,2,3]))
x=[4,6,8]
print("trapz[1,2,3] x=[4,6,8]: ", np.trapz([1,2,3], x=[4,6,8]))
print("trapz[1,2,3] dx=2: ", np.trapz([1,2,3], dx=2))
a = np.arange(6).reshape(2, 3)
print("a: ", a)

print("trapz a, axis=0",np.trapz(a, axis=0))
print("trapz a, axis=1",np.trapz(a, axis=1))