#ifndef FILESYSTEM_HPP
#define FILESYSTEM_HPP

#include "IOSystem.hpp"

class FileSystem{

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

	OFT openFileTable[];

	IOSystem iosystem;

};