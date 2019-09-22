import numpy as np

x= np.arange(9)
y1, y2=np.frexp(x)
print("frexp 9  mantissa:, ", y1)
print("frexp 9  exponent:, ", y2)
print("result: ", y1* 2**y2)