import numpy as np

a=np.array([20,30,40,50])
print('a:',a)
print("*********")
b = np.arange(4)
print('b:',b)
print('*******b**2*****')
d= b**2
print('B**2', d)
print('*******a/2*****')
d= a/2
print('a/2', d)
print('*******a*b****')
d= a*b
print('a*b', d)
A = np.array( [[1,1],
             [0,1]] )
B = np.array( [[2,0],
            [3,4]] )
print("**********A****")
print("A:",A)
print("*********B*****")
print("B:", B)
print('***********A*B******')
print('A*B:', A*B)