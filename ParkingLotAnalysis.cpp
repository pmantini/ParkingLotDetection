#include <iostream>
#include <string>

#include "ParkingLotAnalysisHeader.h"
#include "ReadXML.h"

using namespace cv;
using namespace std;
int main( int argc, char** argv )
{

	//Read XML
	string inputFile("input/2012-12-12_10_00_05.xml");
	
	ReadXML fileRead;
	fileRead.setFileName(inputFile);
	fileRead.read();

    string imageName("input/2012-12-12_10_00_05.jpg"); // by default
    if( argc > 1)
    {
        imageName = argv[1];
    }
    Mat image;
    image = imread(imageName.c_str(), IMREAD_COLOR); // Read the file
    if( image.empty() )                      // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    namedWindow( "Display window", WINDOW_AUTOSIZE ); // Create a window for display.
    imshow( "Display window", image );                // Show our image inside it.
    waitKey(0); // Wait for a keystroke in the window
    return 0;
}