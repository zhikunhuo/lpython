import numpy as np

c=np.array([[[  0,  1,  2],
              [ 10, 12, 13]],
              [[100,101,102],
              [110,112,113]]])
for element in c.flat:
    print(element)