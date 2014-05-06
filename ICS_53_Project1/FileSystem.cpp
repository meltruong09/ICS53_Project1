#include "FileSystem.hpp"

using namespace std;

FileSystem::FileSystem(IOSystem* iosystem){

	this.iosystem = iosystem;

	directory = dirEntry[14];
	for(int i = 0; i < 14; i ++){
		directory[i] = nullptr;
	}
	
	openFileTable = OFT[3];
	for(int i = 0; i < 3; i ++){
		openFileTable[i] = OFT(iosystem.getNumBlocks / 8);
	}
	std::cout << "hullo" << std::endl;

}

void FileSystem::directory(){
	for (int i=0; i < 14; i++){
		dirEntry entry = directory[i];
		if (entry != nullptr){
			char* fileDesc = new char[iosystem.getNumBlocks];
			read_block(entry.indexForDesc, fileDesc);
			std::cout << entry.symbolic_file_name << " " << fileDesc[0] << std::endl;
		}
	}
}

