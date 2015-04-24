#include <stdio.h>

using namespace std;

class Test
{
  public:
	int test;
    Test()
    {
        printf("this is a test %p\n", this);
    }

	Test(const Test& lal)
	{
		printf("this is copy %p\n", this);
	}

	Test& operator=(const Test& laff)
	{
		printf("this is operator = \n");
//		return laff;
	}

    ~Test()
    {
        printf("this is a eend %p\n", this);
    }
};

Test lala(int a)
{
	int fff = a;
	printf("the arg is %d and addr is %p\n", a , &a);
    Test tttt;
	tttt.test = 100;
    return tttt;
}

void add(int a ,int b)
{
	int c = a + b;
	printf("the add is %d\n", c);
}

int fofo()
{
	int woo;
	woo = 1024;
	printf("the int addr in the fofo %p\n", &woo);
	return woo;
}

int main()
{
	int aa;
	printf("%p\n",&aa);
    Test fff = lala(4444);
	int a = 1000;
	int b = 3000;
	add(a, b);
	add(a, b);
	add(45, 88);
	add(88888, 6666);
	printf("the fff addr %p\n", &fff);
	printf("this is tessssssss %d\n", fff.test);
	int mana = fofo();
	printf("the mana addr %p\n", &mana);
    return 0;
}
