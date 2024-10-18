#include<stdio.h>

int main()
{
	int c,b,a=12; //0x000000000000000F 
	c=(a>>1) & 0x01;
	printf("%02x\t%02x\n",a,c);
}
