#include<stdio.h>

static int a=1000;
extern int b=2000;
int c=3000 ;
extern int value();

int main()
{
//	a=10;
//    	int b;
//	c=30;
	printf("values of a=%d\t b=%d\t c=%d\t in example1\n",a,b,c);
	value();
}
