import numpy as np
import cv2 as cv

img = cv.imread(".././datasheet/len_top.jpg",cv.IMREAD_GRAYSCALE )
cv.imshow('lenna',img)
cv.waitKey(0)
cv.destroyAllWindows()
