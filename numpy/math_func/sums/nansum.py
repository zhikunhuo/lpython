import numpy as np

print("nansum 1: ", np.nansum(1))
print("nansum [1]: ", np.nansum([1]))

print("nansum [1, np.nan]: ", np.nansum([1, np.nan]))

a = np.array([[1, 1], [1, np.nan]])
print("nansum [[1, 1],[1, np.nan]]: ", np.nansum(a))
print("nansum [[1, 1],[1, np.nan]], axis=0: ", np.nansum(a, axis=0))

print("nansum [1, np.nan, np.inf]: ", np.nansum([1, np.nan, np.inf]))

print("nansum [1, np.nan, np.NINF]: ", np.nansum([1, np.nan, np.NINF]))

