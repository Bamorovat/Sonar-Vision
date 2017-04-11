

/*	Sonar_Vision: An algorithm which can find a free path via the image.

Copyright (C) 2016 Mohammad Hossein Bamorovat Abadi

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


#include "opencv2/opencv.hpp"
#include <opencv2/highgui/highgui.hpp>

#include "Sonar_Vision.h"
#include "sobel_edg_detection.h"

#include <iostream>

#define pi 180
#define pii 3.141592

using namespace cv;
using namespace std;

int main(int, char**)
{
	VideoCapture cap(0); // open the default camera
	if (!cap.isOpened())  // check if we succeeded
		return -1;

	Mat Main_Image, Gradian_Image;
	int X_Vector_Sum = 0, Y_Vector_Sum = 0;

	for (;;)
	{
		//Mat Main_Image;
		cap >> Main_Image; // get a new frame from camera

		sobel(Main_Image, Gradian_Image);     // Sobel Edge Detection & Threshold
		sonar_vision(Main_Image, Gradian_Image, 24, 10, 27, 60, X_Vector_Sum, Y_Vector_Sum);   //Sonar Vision Obstacle Avoidance function
		cout << "Target Point in X dimension is = " << X_Vector_Sum << endl;
		cout << "Target Point in Y dimension is = " << Y_Vector_Sum << endl << endl;
		X_Vector_Sum = 0, Y_Vector_Sum = 0;

		if (waitKey(30) >= 0) break;
	}

	// the camera will be deinitialized automatically in VideoCapture destructor
	return 0;
}

