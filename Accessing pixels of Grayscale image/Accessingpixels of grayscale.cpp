#include "opencv2/opencv.hpp"
#include <stdint.h>

using namespace cv;
using namespace std;

int main(int argv, char** argc)
{
	Mat original = imread("avengers.png", CV_LOAD_IMAGE_GRAYSCALE);
  Mat modified = imread("avengers.png", CV_LOAD_IMAGE_GRAYSCALE);

	for (int r = 0;r < modified.rows;r++)
	{
		for (int c = 0;c < modified.cols;c++)
		{
			modified.at<uint8_t>(r, c) = modified.at<uint8_t>(r, c) * 0.5f;
		}
	}

	imshow("original", original);
	imshow("modified", modified);

	waitKey();
}
