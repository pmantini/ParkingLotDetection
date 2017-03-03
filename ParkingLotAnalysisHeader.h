#ifndef PARKING_LOT_ANALYSIS_HEADER_H
#define PARKING_LOT_ANALYSIS_HEADER_H

#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>
#include <vector>
using namespace std;
using namespace cv;

struct contour{
	Point point1;
	Point point2;
	Point point3;
	Point point4;
};

struct space{
	int id, occupied;
	RotatedRect rotatedRect;	
	contour contour;
};

struct parking{
	vector<space> ListOfSpaces;
};



#endif