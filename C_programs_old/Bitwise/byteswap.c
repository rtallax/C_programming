#include<stdio.h>

int main()
{
	int a=0x12345678 ;
//	printf("Enter the byte\n");
//	scanf("%c",&a);
	a=((((a<<24)&0XFF000000) | ((a>>24)&0X000000FF)) | ((a&0X00FFFF00)));
	printf("%02X\n",a);
}
