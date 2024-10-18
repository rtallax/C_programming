#include<stdio.h>
#include<string.h>

void printReverse(char str[]) 
{ 
	int length = strlen(str); 
	// Traverse string from end 
	int i;
//	printf("Str len=%d\n",length); 
	for (i = length - 1; i >= 0; i--) 
	{
		if (str[i] == ' ') 
		{ 
			str[i] = '\0'; 
			printf("%s ", &(str[i])+1);       
		} 
	} 
	// printing the last word 
	printf("%s\n",str);
}

/*
void printReverseword(char str[]) 
{ 
	int i,count = -1,length,j=0;
	length=strlen(str);
	printf("Str len=%d\n",length); 
	for (i = 0; i < length; i++) 
	{
		count++;
		if (str[i] == ' ' || str[i] == '\0') 
		{ 
			for(j=count-1;j>=0;j--) 
			{
				printf("%c",str[j]);
			}    
		count=0;   
		} 
	} 
	// printing the last word 
//	printf("%s\n",str);
}*/
int main()
{
	char str[50];
	printf("Enter the string words to be reversed\n");
	scanf("%[^\n]s",str); //hello world
	printReverse(str);
//	printReverseword(str);
	return 0 ;
}

