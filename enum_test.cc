#include<stdio.h>
enum Events
{
	READ_EVENT = 0x1,
	WRITE_EVENT = 0x2,
};


int main()
{

    Events lala;
    lala = READ_EVENT;
    return 0;
}
