import numpy as np
import cv2 as cv

img = cv.imread(".././datasheet/len_top.jpg",cv.IMREAD_COLOR)
cv.imshow('lenna',img)
cv.waitKey(0)
gray = cv.cvtColor(img, cv.COLOR_RGB2GRAY)
cv.imshow("gray", gray)
cv.waitKey(0)
cv.destroyAllWindows()
