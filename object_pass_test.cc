#include<stdio.h>

class A
{
	public:
		int aa;
		A()
		{
				this->aa = 7;
		}
		~A()
		{
				printf("A is del\n");
		}
};

void set(A& aaa)
{
		aaa.aa = 78;
}
void fun_new()
{
	 A object_a;
	 set(object_a);
}

int main()
{
fun_new();

}
