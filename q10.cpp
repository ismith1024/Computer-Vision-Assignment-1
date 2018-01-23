

















/*
(2 marks) Using the same R, T, f, sx, sy, and Xw as given in Question 9 write an
OpenCV program that projects this single 3d point into 2d pixels using the given
camera parameters. The routine projectpoints that you must use is described in
https://docs.opencv.org/2.4/modules/calib3d/doc/camera_calibration_and_3d_rec
onstruction.html#projectpoints The C versions of these routines do not work in
OpenCV3.2, even if the documentation says that they do so you should use C++
versions. You should use the C++ API (and not the C API) as is described in
https://docs.opencv.org/3.4.0/df/de5/tutorial_interoperability_with_OpenCV_1.ht
ml and you can access the required routines through the namespace cv. Look at
laplace.cpp as an example of how to link with the C++ api, and remember to also
include #include "opencv2/calib3d/calib3d.hpp" in your program to be able to
use projectpoints. I first set up K and R matrix, and T vector, along with a zero
distortion vector; all as mats of type float (using the C++ interface for OpenCV).
It also seems to work if they are allocated as doubles. Look at the Mat tutorial in
OpenCV and remember to create all vectors as the appropriate sized column
array. I declare a single 3d point which is to be projected to 2d as a
vector<points3f> as described in the documentation for projectpoints. Since the
rotation matrix is the identity matrix you do not need to convert this matrix to the
rotation vector format by calling the routine Rodrigue. Instead you can simply
pass a zero rotation vector to the routine projectPoints. In Python you
access OpenCV by using import cv2, not import cv (which does not work in
Python). Also, in python the input vectors should be row vectors and not column
vectors, which is opposite from C++. Also the arrays should be explicitly declared
using numpy as floats, or initialized to floating values (same result). Your final
program should print or display the value of Xw along witt the projected x and y
pixel positions. The final projected pixel values should be very close to what you
calculated by hand in Question 9. Include the source code of your program and
some proof that the program produces the correct results (either copy the printed
output as a picture using screen capture or print the results to a file). A simple
tutorial on writing text to files is in http://www.cplusplus.com/doc/tutorial/files/
Please do not include the program executable. However, I reserve the right to ask 
for a demo of your program if I think that your code does not actually work. Do
not create a complete projection matrix by hand, please use the routine
projectPoints to compute the 2d projection of the given 3d point as I have
instructed.
*/


