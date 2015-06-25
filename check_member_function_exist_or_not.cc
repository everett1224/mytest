#include <iostream>

struct Hello
{
	int helloworld()
	{
		int aa = 1024;
		return 0;
	}
};

struct Generic
{

};

template <typename T>
class has_helloworld
{

	    typedef char one;
		typedef long two;

		template <typename C>  static one test( typeof(&C::helloworld) ) ;
		//the main call without object , so the static in necesary
		template <typename C> static two test(...);//C can't declare like this


	public:
		enum {	value = sizeof(test<T>(0)) == sizeof(char) };
		//the test<T>(0) will not run in sizeof, sizeof run as in the compile time, but the sizeof can return the function return size
};

int foo(...);


int
main(int argc, char *argv[])
{

	    std::cout << has_helloworld<Hello>::value << std::endl;
		std::cout << has_helloworld<Generic>::value << std::endl;
		std::cout << sizeof(&foo)<<" "<<sizeof(foo(0))<<std::endl;
		//C++ can't sizeof(foo), in C sizeof(foo) == 1.
		return 0;
}


