#include "FileSystem.hpp"

using namespace std;

FileSystem::FileSystem(IOSystem* iosystem){

	this.iosystem = iosystem;

	openFileTable = OFT[3];

	for(int i = 0; i < 3; i ++){
		openFileTable[i] = OFT(iosystem.getNumBlocks / 8);
	}
	std::cout << "hullo" << std::endl;

}

