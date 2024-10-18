#include<stdio.h>

int main()
{
	char s[]="votary";
	char *p = s ;
	printf("%c\t%c\n",*(p+1),s[1]);	
}
