#include<stdio.h>

int main()
{
	int a=0x12 ;
//	printf("Enter the byte\n");
//	scanf("%c",&a);
	a=(((a<<4)&0XF0) | ((a>>4)&0X0F));
	printf("%02X\n",a);
}
