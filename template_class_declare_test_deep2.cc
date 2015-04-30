#include <stdio.h>
//group 1
template <class Condition, typename TrueResult, typename FalseResult>
class Test1;// this is declare 

template <typename TrueResult, typename FalseResult>
struct Test1<int, TrueResult, FalseResult>
{
  int data;
  Test1()
  {
	printf("this is Test1 int constructor\n");
  }
};
 
template <typename TrueResult, typename FalseResult>
struct Test1<double, TrueResult, FalseResult>
{
  double data;
  Test1()
  {
	printf("this is Test1 double constructor\n");
  }
};

//group 2
template <class Condition, typename TrueResult, typename FalseResult>
struct Test2{
	
	Test2()
	{
		printf("this is Test2 for all constructor\n");
	}
};// this is implementation

template <typename TrueResult, typename FalseResult>
struct Test2<int, TrueResult, FalseResult>
{
  int data;
  Test2()
  {
	printf("this is Test1 int constructor\n");
  }
};
 
template <typename TrueResult, typename FalseResult>
struct Test2<double, TrueResult, FalseResult>
{
  double data;
  Test2()
  {
	printf("this is Test2 double constructor\n");
  }
};

//group 3 function test

template <typename T>
void func(class T)
{
	printf("this is ")
}

int main()
{

//	Test1<short, int, int> Test1_object1; // error
	Test1<int, int, int> Test1_object2; //warning
	Test1<double, int, int> Test1_object3; //warning
	
	Test2<short, int, int> Test2_object1; // 
  

  return 0;
}
