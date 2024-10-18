#include<stdio.h>
#include<string.h>

int rev(char *);
int reverse_word(char*, char*); 

int main()
{
	char str[100];
	printf("Enter sentence: ");
	scanf("%[^\n]s",str);
	rev(str);
	return 0;
}

int reverse_word(char *begin, char *end)
{
	int tmp;
	while(begin<end)
	{
		tmp=*begin;
		*begin++ = *end;
		*end-- = tmp;
	}
}
int rev(char *ptr)
{
	char *begin_char = ptr;
	char *temp = ptr;
	int i=0,j=0 ;
	while(*temp)
	{
		temp++;
		if(*temp == '\0')
		{
			reverse_word(begin_char,temp-1);

		}
		else if(*temp == ' ')
		{
			reverse_word(begin_char,temp-1);
				begin_char = temp+1;
				
		}
	}
	puts(ptr);
	// After reversing sentence
	reverse_word(ptr,temp-1);
	puts(ptr);
}
