#ifndef FILESYSTEM_HPP
#define FILESYSTEM_HPP

#include "IOSystem.hpp"

class FileSystem{

public:
	void directory();

private:
	struct OFT{

		char bufferReader[];
		int currentPosition;
		int fileDescriptorIndex;

		OFT(int size){
			bufferReader = char[size];
			currentPosition = 0;
			fileDescriptorIndex=0;
		}
	
	};
	
	struct dirEntry{
		string symbolic_file_name;
		int indexForDesc;
	};

	dirEntry directory[];
	OFT openFileTable[];

	IOSystem iosystem;

};