#include<stdio.h>
int main()
{
	char a[3][4] = { "Votary","Hyd","Blr"};
	char (*ptr)[4];
	ptr=a;
	printf("%c\n",*(a[1]+2));
	return 0;
}
