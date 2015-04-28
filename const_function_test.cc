#include <iostream>

class A
{
	public:
		int data;
		A():data(0){}
		void setdata(int dd)
		{
			data = dd;
		}
		int doubledata()
		{
			return data*2;
		}
		int athedata(int a) const
		{
			return data = a;
		}

};

int main()
{
	A object;
	object.athedata(1024);
	std::cout<<object.data<<std::endl;

	return 0;
}
