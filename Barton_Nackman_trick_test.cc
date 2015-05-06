#include <iostream>
//group 1 from wiki
template <class T>
class equal_for_all
{
	friend bool operator == (T const& a, T const& b)
	{
		return a.equal_to(b);
	}

	friend bool operator != (T const& a, T const& b)
	{
		return !a.equal_to(b);
	}
	
};

class need_equal : private equal_for_all<need_equal>
{
  public:
	// the word const is needed
	// parameter : in the function operator  b is const
	// function : int the function operator  a is const
	bool equal_to(need_equal const& other) const
	{
		if(this == &other)
			return true;
		else
			return false;
	}
};

/*

//group 2 test for "without keyword friend" and add the function with public
template <class T>
class equal_for_all_mine
{
  public:
	 // *error: ‘bool equal_for_all_mine<T>::operator==(const T&, const T&)’ must take exactly one argument

	  
	  //If operator== is a non static data member, is should take only one parameter, as the comparison will be to the implicit this parameter:
	  //
	  //http://stackoverflow.com/questions/11229074/overloading-operator-complaining-of-must-take-exactly-one-argument
	 bool operator == (T const& a, T const& b)
	{
		return a.equal_to(b);
	}

	 bool operator != (T const& a, T const& b)
	{
		return !a.equal_to(b);
	}
	
};
// change the word private to public
//
class need_equal_mine : public equal_for_all_mine<need_equal_mine>
{
  public:
	// the word const is needed
	// parameter : in the function operator  b is const
	// function : int the function operator  a is const
	bool equal_to(need_equal const& other) const
	{
		if(this == &other)
			return true;
		else
			return false;
	}
};

*/

int main()
{
	//group 1 test good
	need_equal lala;
	need_equal aa;
	
	if(lala == lala)
	{
		std::cout<<"equal\n";
	}

	if(lala != aa)
	{
		std::cout<<"not equal\n";
	}
	/*
	//group 2
	need_equal_mine lalala;
	need_equal_mine aaaa;
	
	if(lalala == lalala)
	{
		std::cout<<"equal\n";
	}

	if(lalala != aaaa)
	{
		std::cout<<"not equal\n";
	}
	*/

	return 0;
}
