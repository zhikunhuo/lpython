import numpy as np

f = np.array([1, 2, 4, 7, 11, 16], dtype=float)
print("gradient [1, 2, 4, 7, 11, 16]: ", np.gradient(f))
print("gradient [1, 2, 4, 7, 11, 16]: ", np.gradient(f, 4))
x = np.array([0., 1., 1.5, 3.5, 4., 6.], dtype=float)
print("gradient [1, 2, 4, 7, 11, 16] x: ", np.gradient(f, x))

print("gradinet [[1, 2, 6], [3, 4, 5]]: ", np.gradient(np.array([[1, 2, 6], [3, 4, 5]], dtype=float)))
