#include <iostream>

template<class T>
T Add(T n1, T n2)
{
    T result;
    result = n1 + n2;
    
    return result;
}

int main()
{
	std::cout<< Add(1, 2) <<std::endl;
	std::cout<< Add<int>(2, 2) <<std::endl;
	
//	std::cout<< Add(1, 2.2)<<std::endl;// this is error

	std::cout<< Add<float>(1, 2.2) <<std::endl; // this is good
	
	std::cout<< Add<float>(1, 2) <<std::endl;
}