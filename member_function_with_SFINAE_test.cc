//http://blog.olivierlanglois.net/index.php/2007/09/01/what_is_the_c_sfinae_principle
//
//SFINAE subsitution failure is not an error
//http://stackoverflow.com/questions/982808/c-sfinae-examples
//

#include <iostream>
struct A
{
	char aa;
	void foo(){}
};

struct B;

template<typename T>
class IsClassT {
  private:
    typedef char One;
    typedef struct { char a[2]; } Two;
    template<typename C> static One test(char C::*);
    // Will be chosen if T is anything except a class.
    template<typename C> static Two test(...);
  public:
	//we need the argu 0 
	//http://www.cplusplus.com/forum/general/76959/ and the inside the C++ model
    enum { Yes = sizeof(IsClassT<T>::template test<T>(0)) == 1 };
    enum { No = !Yes };
};

int main()
{
	std::cout<<IsClassT<A>::Yes<<std::endl;
	std::cout<<IsClassT<B>::Yes<<std::endl;//B is declared , but not defined, the B::* is still exist.
	std::cout<<IsClassT<int>::Yes<<std::endl;	
	return 0;
}