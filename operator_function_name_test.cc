#include <iostream>

class Currency
{
	public:
		int dollar;
		int cent;
		Currency(int a, int b):dollar(a),cent(b)
	{

	}

		Currency operator+(Currency lala)
		{
			return Currency(dollar + lala.dollar, cent + lala.cent);
		}
};

int main()
{
	Currency test(1, 1);
	Currency test2(2, 2);
	Currency result = test + test2;

	std::cout<< result.dollar <<" "<<result.cent<<std::endl;

	return 0;
	
}
