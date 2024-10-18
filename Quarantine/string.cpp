#include<stdio.h>
#include<string.h>

static int len;
int st(char[]);
void reverse(char[]);
int main()
{
	char name[]="raviteja";
	char val[20];
//	int len ;
//	printf("Enter the string\n");
//	gets(name);
	len=st(name);
	printf("string is %s and its length is %d\n",name,len);
	reverse(name);
	printf("Reversed string is %s\n",name);
	getchar();
}

int st(char x[])
{
	int i=0,count=0 ;
	while(x[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}

void reverse(char x[])
{
	int i=0,j=0 ;
	char temp;
	i=0;
	j=st(x)-1;
	while(i<j)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		i++;
		j--;
	}
	//	printf("Reversed string is %s\n",name);
}
