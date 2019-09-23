import numpy as np

print("real_if close [2.1 + 4e-14j], tol=1000: ", np.real_if_close([2.1 + 4e-14j], tol=1000))
print("real_if close [2.1 + 4e-13j], tol=1000: ", np.real_if_close([2.1 + 4e-13j], tol=1000))