#ifndef IOSYSTEM_HPP
#define IOSYSTEM_HPP

class IOSystem
{
	private:
		int L;
		int B;
		char** ldisk;
	
	public:
		IOSystem(int l, int b);
		~IOSystem();
		void read_block(int i, char *p);
		void write_block(int i, char *p);
		void save();
		void restore();
		int getNumDescriptors();
		int getNumBlocks();
};

#endif
