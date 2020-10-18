import cv2
import pyzbar  # used to scan and detect the qr code
import numpy as np
from pyzbar.pyzbar import decode


#img = cv2.imread('Lenna_(test_image).png')  # saving as img
#code = decode(img)

cap = cv2.VideoCapture(0)
cap.set(3,640)
cap.set(4,480)

while True:
    
    success , img = cap.read()
        
    for barcode in decode(img):
        #print(barcode.data)
        
        myData = barcode.data.decode('utf-8')
        print(myData)
        
        pts = np.array([barcode.polygon] , np.int32)
        pts = pts.reshape((-1 , 1 , 2))
        cv2.polylines(img , [pts] , True , (255 , 0 , 255) , 5)
        pts2 = barcode.rect
        cv2.putText(img , myData , (pts2[0] , pts2[1]),cv2.FONT_HERSHEY_SIMPLEX ,0.9,(255,0,255) ,4)
        
    cv2.imshow('Result' , img)
    key = cv2.waitKey(1)
    if key == ord('q'):
        break
# cleaning up
cv2.destroyAllWindows()
cap.release()
    #print(barcode.rect)
#print(code)


