#include<stdio.h>
int main()
{
	unsigned int x = ~((unsigned int)0xC5);
	printf("0x%x\n",x);
	return 0;
}
