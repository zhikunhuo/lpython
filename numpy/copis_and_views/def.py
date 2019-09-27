import numpy as np

def f(x):
     x.shape = 3, 4
     print(id(x))
	 
a= np.arange(12)

print("Array : ", a)
print("Array id: ", id(a))
f(a)
print("Array: ", a)
	 