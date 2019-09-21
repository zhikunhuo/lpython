import numpy as np

x = [1, 2, 3]
y = [4, 5, 6]
print("Cross x*y: ", np.cross(x, y))

x = [1, 2]
print("1 Cross x*y: ", np.cross(x, y))
x = [1, 2, 0]
print("2 Cross x*y: ", np.cross(x, y))

x = [1,2]
y = [4,5]
print("3 Cross x*y: ", np.cross(x, y))

x = np.array([[1,2,3], [4,5,6]])
y = np.array([[4,5,6], [1,2,3]])
print("4 Cross x*y: ", np.cross(x, y))

x = np.array([[1,2,3], [4,5,6], [7, 8, 9]])
y = np.array([[7, 8, 9], [4,5,6], [1,2,3]])
print("5 Cross x*y: ", np.cross(x, y))