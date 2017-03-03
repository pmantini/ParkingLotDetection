#ifndef READXML_H
#define READXML_H 

#include <string>

#include "ParkingLotAnalysisHeader.h"

using namespace std;

class ReadXML{
    string inputFileName;

  public:	
    void setFileName(string);
	string getFileName();

	parking read();

};

#endif