#include<stdio.h>
#include<string.h>
// For Example Input sentence is: How are you
int word_rev(char []);   // woH era uoy
int sentence_rev(char []);  // you are How

int main()
{
	char str[50] ;
	printf("Enter the sentence:\n");
	scanf("%[^\n]s",str);
	printf("Input sentence is:");
	printf("%s\n",str);
	word_rev(str);
//	sentence_rev(str);
	return 0;
}

int word_rev(char str[])
{
	int i=0,j=0,k=0,x=0,y=0,len=0,temp=0;
	char arr[x][y] ;
/*	while(str[i]!='\0')
	{
		if(str[i] == ' ')
		{
			arr[x][y] = '\0';
			i++;
			x++;
			y=0;
		}
		else
		{
			arr[x][y] = str[i];
			y++;
			i++;
		}
	} */

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] == ' ')
		{
			arr[x][y] = '\0';
			x++;
			y=0;
		}
		else
		{
			arr[x][y] = str[i];
			y++;
		}
	}
	arr[x][y] = '\0';
	for(k=0;k<=x;k++)
	{
		len=strlen(arr[k]);
		for(i=0,j=len-1;i<j;j--,i++)
		{
			temp = arr[k][i];
			arr[k][i] = arr[k][j];
			arr[k][j] = temp;
		}	
	}	
	for(i=0;i<x;i++)
		printf("%s",arr[i]);
}
