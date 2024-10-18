#include<stdio.h>

int main()
{
	int a = 0x12345678 ;
	char *ptr;
	ptr=(char *)&a;
	ptr++;
	printf("ptr=%p\n",*ptr);
	if(*ptr == 0x78)
		printf("Little endian\n");
	return 0;
}
