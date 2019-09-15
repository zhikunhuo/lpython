import numpy as np

a= np.linspace(2.0, 3.0, num=5)
print(a)
print("********")
a= np.linspace(2.0, 3.0, num=5, endpoint=False)
print(a)
print("********")
a= np.linspace(2.0, 3.0, num=5, retstep=True)
print(a)