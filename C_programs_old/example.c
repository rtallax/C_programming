#include<stdio.h>

int fun1()
{
	static int value;
	value=10;
	printf("val in fun2 = %d\n",value);
}
int fun2()
{
	value=20;
}
int main()
{
	fun1();
	fun2();
	return 0;
}
