#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main() {
	cv::Point pt,pt1,pt2;
	Mat dispMat1(100,100,CV_8UC3,Scalar(255,0,0));
	
	pt.x = 10;
	pt.y = 10;
	circle(dispMat1, pt, 10, CV_RGB(255, 0, 0), 1, 8,0);
	line(dispMat1, pt1, pt2, CV_RGB(255, 0, 0), 1, 8,0);
	cv::Rect rect;
	rect.x = 10;
	rect.y = 10;
	rect.width;
	rect.height;
	rectangle(dispMat1, rect, CV_RGB(255, 0, 0),1, 8, 0);
	imshow("sample1", dispMat1);

	waitKey(0);

}