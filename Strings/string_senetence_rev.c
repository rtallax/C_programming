#include<stdio.h>


void reverse_word(char *str, int start, int end)
{
	char temp;
	while(start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start ++;
		end --;	
	}	
}	
int main()
{
	int i=0,start=0,end=0;
	char str[] = "Welcome to the home";
	printf("Before: %s\n", str);
	while(str[i]!='\0')
	{	
		if(str[i]==' '):wq
		reverse_word(str);
		i++;
	}	
	printf("After: %s\n", str);
}
