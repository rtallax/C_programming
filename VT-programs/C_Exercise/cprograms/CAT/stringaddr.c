#include<stdio.h>

int string()
{
	char *str2 = "#Votarytech" ;
	printf("%p\n",str2);
	return 0;
}
int main()
{
//	char *str1 = "#Votarytech" ;
	char *str1 = "#Votarytech" ;
	printf("%s\n",str1);
	printf("%p\n",str1);
	string();
	return 0;
}
	
