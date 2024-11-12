#include <stdio.h>

int sub(int a, int b) 
{
	printf("In sub call\n");
	return a-b;
}
int add(int a, int b, int (*ptr)(int, int))
{
	int ret=(*ptr)(a,b);
	printf("a:%d, b:%d, sub: %d\n",a,b,ret);
}

int main()
{
	int a=10,b=5;
	int (*fun)(int,int,int (*)(int,int))= &add;
//	fun = add;
	fun(a,b,sub);
}
