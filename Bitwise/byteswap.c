#include<stdio.h>

int main()
{
	int a=0x12345678 ;
	printf("0x%x\n",a);
//	printf("Enter the byte\n");
//	scanf("%c",&a);
//	a=((((a<<24)&0XFF000000) | ((a>>24)&0X000000FF)) | ((a&0X00FFFF00)));
	a=((((a<<24)) | ((a>>24))) | ((a<<8)&0X00FF0000) | ((a>>8)&0x0000FF00));
	printf("%02X\n",a);
}
