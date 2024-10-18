#include<stdio.h>
#include<string.h>

void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}
 
void reverse_word(char *s)
{
	char *temp=s ;
    // Word boundary
	char* word_begin = s;
	printf("temp =%c word_begin=%c\n",*temp,*word_begin);
 
	while(*temp)
	{
		temp++;
        	if (*temp == '\0') {
            		reverse(word_begin, temp - 1);
        	}
        	else if (*temp == ' ') {
            		reverse(word_begin, temp - 1);
        	    	word_begin = temp + 1;
       	 	}	
	}
	reverse(s, temp - 1);
}
int main()
{
	char str[100] ;
	char *ptr=str;
	printf("Enter the string words to be reversed\n");	// i love india
	scanf("%[^\n]s",str);
	reverse_word(str);
	printf("%s\n",str);
	return 0;
}
