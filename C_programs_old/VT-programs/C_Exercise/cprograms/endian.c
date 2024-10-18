#include<stdio.h>

int main()
{
	int i, x=0x76543210 ;
	char *ptr;
	ptr=&x;
	for(i=0;i<4;i++)
	{
		printf("%02x",*ptr++);	
	}
	return 0 ;
}
