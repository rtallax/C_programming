#include<stdio.h>

int main()
{
	int a=0x12345678,i,size;
	char *ptr;
	ptr=&a;
	size=sizeof(a);
	printf("Size of a=%d\n",size);
	for(i=0;i<size;i++)
	{
		printf("%02x ",*(ptr+i));
	}
	printf("\n12 34 56 78 is BIG-ENDIAN");
	printf("\n78 56 34 12 is LITTLE-ENDIAN");
	getchar();
}
