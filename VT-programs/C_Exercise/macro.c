#include<stdio.h>

#define square(x) x*x
#define largest(x,y,z) ((x>y)?((x>z)?x:z):((y>z)?y:z))
int main()
{
	printf("Square = %d\n",square(4));
	printf("Largest = %d\n",largest(1,2,3));
	return 0;
}
