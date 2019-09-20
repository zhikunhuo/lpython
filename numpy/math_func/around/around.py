import numpy as np

a= np.around([0.37, 1.64])
print(a)

b = np.around([0.37,1.64], decimals=1)
print(b)

c = np.around([.5, 1.5, 2.5, 3.5, 4.5])
print(c)

d= np.around([1,2,3,11], decimals=1)
print(d)

e = np.around([1,2,3,11,28,8], decimals=-1)
print(e)