#include <iostream>

template <int X, int Y>
struct Adder
{
	enum {
		result = X + Y
	};
};


int main()
{
	std::	cout<<Adder<1 , 2>::result <<std::endl;
	return 0;
}
