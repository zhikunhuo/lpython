import numpy as np

np.set_printoptions(formatter={'all':lambda x: 'int: '+str(-x)})
x = np.arange(3)
print(x)
print("**************")
np.set_printoptions() 
print(x)