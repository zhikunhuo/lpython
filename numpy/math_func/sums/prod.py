import numpy as np

x = np.array([536870910, 536870910, 536870910, 536870910])
print("product x: ", np.prod(x))
print("product empty: ", np.prod([]))

print("product [1,2]:", np.prod([1,2]))

print("product [[1, 2], [3, 4]]: ", np.prod([[1,2], [3, 4]]))

print("product [[1, 2], [3, 4]],axis=1: ", np.prod([[1,2], [3, 4]], axis=1))

print("product [1., np.nan, 3.]: ", np.prod([1., np.nan, 3.], where=[True, False, True]))

x = np.array([1, 2, 3], dtype=np.uint8)
print("unsigned [1,2,3]: ", np.prod(x).dtype == np.uint)

x = np.array([1, 2, 3], dtype=np.int8)
print("unsigned [1,2,3]: ", np.prod(x).dtype == np.uint)


print("unsigned [1, 2], initial = 5: ", np.prod([1, 2], initial = 5))