import numpy as np
from numpy import newaxis


a = np.array([4.,2.])
b = np.array([3.,8.])
print("newaxis a:", a[:,newaxis])
print("newaxis b:", b[:,newaxis])
print("column_stack:", np.column_stack((a[:,newaxis],b[:,newaxis])))

print("hstack:",np.hstack((a[:,newaxis],b[:,newaxis])))