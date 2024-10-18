#include<stdio.h>

int main()
{
	int c,b,a=12; //0x000000000000000F 
	c=1<<2 | a;
	printf("%02x\t%02x\n",a,c);
}
