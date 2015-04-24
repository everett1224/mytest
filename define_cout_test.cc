#include <iostream>

#define myvar 17


int main()
{
#if myvar % 2
	std::cout<<"odd"<<std::endl;
#else
	std::cout<<"even"<<std::endl;
#endif

	return 0;
}
