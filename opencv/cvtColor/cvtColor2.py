import numpy as np
import cv2 as cv

img = cv.imread(".././datasheet/len_top.jpg",cv.IMREAD_COLOR)
cv.imshow('lenna',img)
cv.waitKey(0)
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow("gray", gray)
cv.waitKey(0)
rgbgray = cv.cvtColor(gray, cv.COLOR_GRAY2BGRA)
cv.imshow("rgb_gray", rgbgray)
cv.waitKey(0)
cv.destroyAllWindows()