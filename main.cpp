#include <iostream>
#include <string>
#include "IOSystem.hpp"

int main()
{
	IOSystem system = IOSystem(10,5);
	system.save();
    return 0;
}

