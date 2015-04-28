template<class T1, class T2, class T3>
class Test;//this is just a declare

template<class T1, class T2, class T3>
class TTest{};// this is declare and imp

template<class T1, class T2>
class TTest{};// this is declare and imp

int main()
{
//	Test<int, float, double> ttt;//error: aggregate ¡®Test<int, float, double> ttt¡¯ has incomplete type and cannot be defined Test<int, float, double> ttt;

	TTest<int, float, double> ttt;
	
	return 0;
}