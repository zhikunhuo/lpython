import numpy as np

x = int(input("Input x: "))
y = int(input("Input y: "))
z = int(input("Input z: "))

def factorial(y):
    a = 1
    for index in range(1, y+1):
        a=a*index    
    return a

def calc_fun(x,y,z):
    result_factorial = factorial(y)
    return np.power(x, result_factorial)%z
 
print(" result: ", calc_fun(x,y,z))

    