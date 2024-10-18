#include<stdio.h>
int main()
{
	char *str="Votary tech";
	char arr[5]="VT";
	printf("%ld %ld %ld %ld\n",sizeof(str),sizeof(*str),sizeof(arr),sizeof(*arr));
	return 0;
}
