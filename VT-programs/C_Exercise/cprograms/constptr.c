#include<stdio.h>
int main()
{
	unsigned int a;
	unsigned int *ptr = &a;
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
}
