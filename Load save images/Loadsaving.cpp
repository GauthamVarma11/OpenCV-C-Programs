#include "opencv2/opencv.hpp"
using namespace cv;

int main(int argv,char** argc)
{
	Mat testColor = imread("avengers.png", CV_LOAD_IMAGE_COLOR);
	Mat testGray = imread("avengers.png", CV_LOAD_IMAGE_GRAYSCALE);

	imshow("color", testColor);
	imshow("Gray", testGray);
	

	imwrite("grayimage.jpg", testGray);

	waitKey();
}

