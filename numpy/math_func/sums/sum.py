import numpy as np


print("Empty sum: ", np.sum([]))
print("Empty sum[0.5, 1.5]: ", np.sum([0.5, 1.5]))
print("Empty sum[0.5, 0.7,0.2, 1.5]: ", np.sum([0.5, 0.7,0.2, 1.5], dtype=np.int32))
print("Empty sum[[0,1],[0,5]]: ", np.sum([[0,1],[0,5]]))
print("Empty sum[[0,1],[0,5]],axis=0: ", np.sum([[0,1],[0,5]], axis=0))
print("Empty sum[[0,1],[0,5]],axis=1: ", np.sum([[0,1],[0,5]], axis=1))
print("Empty sum[[0, 1], [np.nan, 5]]: ", np.sum([[0,1],[np.nan,5]], where=[False,True],axis=1))