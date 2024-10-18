#include<stdio.h>

struct sample 
{
	char a;
	char b;
	int i;
	char c;
	char d;
}__attribute__((packed)) votary ;

int main()
{
	printf("%ld\n",sizeof(votary));
	return 0;
}
	
