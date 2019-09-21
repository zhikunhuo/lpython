import numpy as np

u8_arr = np.array([1, 0], dtype=np.uint8)

print("diff [1,0]", np.diff(u8_arr))

x =[1, 2, 4, 7, 0]
print("diff [1, 2, 4, 7, 0]: ", np.diff(x))

print("diff [1, 2, 4, 7, 0] n = 2: ", np.diff(x, n = 2))

x = np.array([[1, 3, 6, 10], [0, 5, 6, 8]])
print("diff [[1, 3, 6, 10], [0, 5, 6, 8]]: ", np.diff(x))
print("diff [[1, 3, 6, 10], [0, 5, 6, 8]] axis=0: ", np.diff(x, axis=0))

x = np.arange('1066-10-13', '1066-10-16', dtype=np.datetime64)
print("diff '1066-10-13', '1066-10-16': ", np.diff(x))
print("diff [1]: ", np.diff([[1],[2]]))
