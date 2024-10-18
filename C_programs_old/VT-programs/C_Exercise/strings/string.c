#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void stringlen()
{
	int i=0,count=0,len;
	char str[100];
	printf("Enter the string to calculate length\n");
	scanf("%[^\n]s",str);
	printf("Entered string is %s\n",str);
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	len=strlen(str);
	printf("string length len=%d and count=%d size=%d\n",len,count,sizeof(str));
}

void stringcopy()
{
	char str1[50],str2[20];
	int i=0,j=0,count=0 ;
	printf("Enter the string to copy\n");
	scanf("%[^\n]s",str2);
	printf("Entered string is %s\n",str2);
	while(str2[i]!='\0')
	{
		str1[j]=str2[i];
		i++;
		j++;
	}
	printf("string after copied is %s\n",str1);
}

void stringconcatenation()
{
	char str1[50],str2[20];
	int i=0,j=0,count=0,count1=0 ;
	printf("Enter the first string\n");
	scanf("%[^\n]s",str1);
	getchar();
	printf("Enter the second string\n");
	scanf("%[^\n]s",str2);
	printf("Entered first string is %s\n",str1);
	printf("Entered second string is %s\n",str2);
	i=0;j=0;
	while(str1[i]!='\0')
	{
		count++;
		i++;
	}
	while(str2[j]!='\0')
	{
		str1[count++]=str2[j];
		count1++;
		j++;
	}
	str1[count]='\0';
	printf("String after concatenation is %s\nlength is %d\n",str1,count);
}

void stringrev()
{
	int i=0,j=0,k=0,count=0,len;
	char str[100],str1[100];
	printf("Enter the string to reverse\n");
	scanf("%[^\n]s",str);
	printf("Entered string is %s\n",str);
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	printf("len=%d\n",count);
	for(i=count-1;i>0;i--)
	{
		str1[k]=str[i];	
		k++;
	}
	str1[k]='\0';
	printf("String after reverse %s\n",str1);
}

void stringcmp()
{	
	char str1[50],str2[20];
	int i=0,j=0,val=0 ;
	printf("Enter the first string\n");
	scanf("%[^\n]s",str1);
	getchar();
	printf("Enter the second string\n");
	scanf("%[^\n]s",str2);
	printf("Entered first string is %s\n",str1);
	printf("Entered second string is %s\n",str2);
	for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
	{
		if(str1[i]==str2[j]);
		else
		{ 
			printf("String doesnot match\n");
			val++;
		}
	}
	if(val) 
	{
		printf("String match failed\n");
	}
	else
		printf("String Matched\n");
}

void stringlwr()
{
	char str[100],str1[100],i=0,j,count;
	printf("Enter the string\n");
	scanf("%[^\n]s",str);
	printf("String before converted is %s\n",str);
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	for(j=0;j<count;j++)
	{
		if(str[j]>='A' && str[j]<='Z')
		{
			str[j]=str[j]+32;
		}
	}
	printf("String after converted is %s\n",str);
}
void stringupr()
{
	char str[100],str1[100],i=0,j,count;
	printf("Enter the string\n");
	scanf("%[^\n]s",str);
	printf("String before converted is %s\n",str);
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	for(j=0;j<count;j++)
	{
		if(str[j]>='a' && str[j]<='z')
		{
			str[j]=str[j]-32;
		}
	}
	printf("String after converted is %s\n",str);
}

int main()
{
	int val,size ;
	char str[100],str1[100],str2[100];
	int count=0,len,i=0;
//	gets(str);
	printf("Enter 1.strlen\n2.strcpy\n3.strcat\n4.strrev\n5.strcmp\n6.strlwr\n7.strupr\n");
	scanf("%d",&val);
	getchar();
	switch(val)
	{
		case 1: 
			stringlen();
			break;
		case 2: 
			stringcopy(); 
			break;
		case 3:
			stringconcatenation();
			break;
		case 4:
			stringrev();
			break;
		case 5:
			stringcmp();
			break;
		case 6:
			stringlwr();
			break;
		case 7:
			stringupr();
			break;
		default: break;
	}
	return 0;
}
	
