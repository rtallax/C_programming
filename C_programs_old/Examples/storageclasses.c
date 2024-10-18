#include<stdio.h>

extern int a=100;
static int b=200;
int c=300;

int main()
{
	a++;
	int b;
	c++;
	printf("a=%d\t b=%d\t c=%d\n",a,b,c);
}
