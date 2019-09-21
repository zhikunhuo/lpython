import numpy as np

print("nancumsum 1: ", np.nancumsum(1))
print("nancumsum [1]: ", np.nancumsum([1]))
print("nancumsum [1, np.nan]: ", np.nancumsum([1,np.nan]))
a = np.array([[1, 2], [3, np.nan]])
print("nancumsum [[1, 2], [3, np.nan]: ", np.nancumsum(a))
print("nancumsum [[1, 2], [3, np.nan] axis = 0: ", np.nancumsum(a, axis = 0))
print("nancumsum [[1, 2], [3, np.nan] axis = 1: ", np.nancumsum(a, axis = 1))