import numpy as np

time = np.linspace(20, 145, 5)
data = np.sin(np.arange(20)).reshape(5,4)
print("time: ", time)
print("data: ", data)  
ind = data.argmax(axis=0)
print("ind: ", ind)
time_max = time[ind]
data_max = data[ind, range(data.shape[1])]
print("time_max: ", time_max)
print("data_max: ", data_max)

print("np.all(data_max == data.max(axis=0): ", np.all(data_max == data.max(axis=0)))