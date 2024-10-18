#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int myatoi(char *str)
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		count=count*10+str[i]-'0';
	}
	return count;
}
int main()
{
	int val;
	char *c="5657" ;
//	printf("Enter the ascii value\n");
//	scanf("%s",c);
//	gets(c);
	val=myatoi(c);
	printf("atoi =%d\n",val);
	return 0;
}
