import numpy as np

c=np.array([[[  0,  1,  2],
              [ 10, 12, 13]],
              [[100,101,102],
              [110,112,113]]])
print("c: ", c)
print("c shape: ", c.shape)
print("c[1,...]: ", c[1,...])
print("c[...,2]: ", c[...,2])
