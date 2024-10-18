#include<stdio.h>
#include<string.h>


void pallindrome(char[]);
int len;
int main()
{
//	char name[]="raviteja";
	char name[]="malayalam";
//	int len ;
//	printf("Enter the string\n");
//	gets(name);
	len=strlen(name);
	printf("string is %s and its length is %d\n",name,len);
	pallindrome(name);
	getchar();
}
 
void pallindrome(char x[])
{
	int i=0,j=0 ;
	j=len-1;
	while(i<j)
	{
		if(x[i]!=x[j])
		{
			printf("Given string is not pallindrome\n");
			return ;	
		}
		i++;
		j--;
	}
	printf("Given string is pallindrome\n");
}
