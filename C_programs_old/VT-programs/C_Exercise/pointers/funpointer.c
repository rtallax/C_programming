#include<stdio.h>
void add(int a, int b)
{
	int c;
	c= a-b;
	return c;
}
int main()
{
	int  val;
	int (*fun)(int , int);
	fun=add;
	val=fun(10,5);
	printf("%d\n",val);
	return 0;
}
		
