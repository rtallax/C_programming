#include<stdio.h>
#include<string.h>
int main()
{
	char *str1="Welcome to Votary";
	char *str2="Welcome to Votary";
	if(strcmp(str1,str2))
		printf("TRUE\n");
	else
		printf("FALSE\n");
	return 0;
}
