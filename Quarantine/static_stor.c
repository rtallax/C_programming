#include<stdio.h>

int main()
{
	fun();
	fun();
	fun();
	return 0;
}
void fun()
{
	static int a=10;
	printf("%d\n",a++);
}
