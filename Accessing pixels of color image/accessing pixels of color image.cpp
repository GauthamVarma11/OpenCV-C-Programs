#include "opencv2/opencv.hpp"
#include <stdint.h>

using namespace cv;
using namespace std;

int main(int argv, char** argc)
{

  Mat original = imread("avengers.png", CV_LOAD_IMAGE_ANYCOLOR);
	Mat modified = imread("avengers.png", CV_LOAD_IMAGE_ANYCOLOR);

	for (int r = 0;r < modified.rows;r++)
	{
		for (int c = 0;c < modified.cols;c++)
		{
			
			 modified.at<cv::Vec3b>(r, c)[2] = modified.at<Vec3b>(r, c)[2] * 0;

		}
	}

	imshow("original", original);
	imshow("modified", modified);

	waitKey();
}


