#include<stdio.h>
int main()
{
	const int local = 5;
	const volatile int vlocal = 5;
	int * const ptr = &local;
	ptr = 10;
	ptr = &vlocal;
	printf("local = %d\n", local);
	printf("vlocal = %d\n", vlocal);
}
