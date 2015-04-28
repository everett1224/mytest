#include <iostream>

template<bool cond, class T1, class T2>
class Test{

};

template<class T1, class T2>
class Test{

};


int main()
{
	Test<true, int, double> ttt1;
	Test<int, double> ttt2;


	return 0;
}
