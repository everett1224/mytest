#include <stdio.h>

class Base
{

};

class Left : public Base
{

};

class Right : public Base
{

};

class Third : public Base
{
	int a;
};

class Fouth : public Base
{
	Third dddd;
	int i;
};

class Bottom : public Left, public Right
{

};

class Bottom_bottom : public Bottom
{

};

int main()
{
	Base ob;
	Bottom obm;
	
	unsigned char judge = *((unsigned char*)&ob);
	unsigned char judge_for_obm1 = *((unsigned char*)(&obm));
	unsigned char judge_for_obm2 = *((unsigned char*)(&obm) + 1);

	printf("%02x\n", judge);
	printf("%02x\n", judge_for_obm1);
	printf("%02x\n", judge_for_obm2);

	printf("the addr of ob is %p\n", &ob);
	printf("the addr of obm is %p\n", &obm);

	printf("the sizeof Base is %zu\n", sizeof(Base));
	printf("the sizeof Left is %zu\n", sizeof(Left));
	printf("the sizeof Right is %zu\n", sizeof(Right));
	printf("the sizeof Bottom is %zu\n", sizeof(Bottom));
	printf("the sizeof Third is %zu\n", sizeof(Third));
	printf("the sizeof Fouth is %zu\n", sizeof(Fouth));
	printf("the sizeof Bottom_bottom is %zu\n", sizeof(Bottom_bottom));

	Left *lp = (Left*)&obm;
	Right *rp = (Right*)&obm;

	printf("the lp is %p\n", lp);
	printf("the rp is %p\n", rp);
	//Left *pp = dynamic_cast<Left*>(p);// compile error source type is not polymorphic

	return 0;
}
