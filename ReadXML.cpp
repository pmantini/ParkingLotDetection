#include "ReadXML.h"
#include <string>

void ReadXML::setFileName(string inputFileName){
	this->inputFileName = inputFileName;
};

string ReadXML::getFileName(){
	return inputFileName;
};

parking ReadXML::read(){
	cout << endl << "Reading: " << inputFileName << endl;
	
	FileStorage fs;	
	fs.open(inputFileName, FileStorage::READ);

	/*FileNode space = fs["space"];
	cout << space.type() << endl;*/

	return parking();
};