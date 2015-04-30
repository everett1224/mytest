#include <iostream>


template<typename T>
double GetAverage(T tArray[], int nElements)
{
   T tSum = T(); // tSum = 0
   for (int nIndex = 0; nIndex < nElements; ++nIndex)
   {
     tSum += tArray[nIndex];
   }
   
   // Whatever type of T is, convert to double
   return double(tSum) / nElements;
 }
 
 
 class Currency
{
	public:
		int dollar;
		int cent;
		Currency():dollar(0),cent(0){}
		Currency(int a, int b):dollar(a),cent(b){}
/*
		Currency& operator=(Currency& lala)
		{
			dollar = lala.dollar;
			cent = lala.cent;
		}
*/		

		Currency operator=(Currency& lala)
		{
			return Currency(lala.dollar, lala.cent);
		}
		
		Currency operator+(Currency lala)
		{
			return Currency(dollar + lala.dollar, cent + lala.cent);
		}
		
		Currency operator+=(Currency lala)
		{
			return Currency(dollar + lala.dollar, cent + lala.cent);
		}
		/*
		double operator double()//error: return type specified for ‘operator double
		{
			return dollar + cent/100;
		}
		*/
		
		operator double()
		{
			return dollar + (double)cent/100;
		}
};

int main()
{
	Currency myarr[3];
	Currency test1(1,1);
		Currency test2(2,2);
			Currency test3(3,3);
	/*
	myarr[0] = Currency(1,1);
	myarr[1]= Currency(2,2);
	myarr[2]= Currency(3,3);
	*/
	myarr[0] = test1;
	myarr[1]= test2;
	myarr[2]= test3;
	
	
	
	
	
	double result = GetAverage(myarr, 3);
	
	std::cout<< result <<std::endl;
	
}
