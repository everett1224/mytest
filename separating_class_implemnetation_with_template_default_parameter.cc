#include <iostream>

using namespace std;

template <typename T = int>
class Item
{
	public:
	void setData(T data);
};

template <typename T>
void Item<T>::setData(T data)
{
	cout<<"This is default parameter template class, seperate the declare and the implement"<<endl;
}

int main()
{
	Item<> lala;
	lala.setData(1024);
}

