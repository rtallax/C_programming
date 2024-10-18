// string concatenation is nothing but adding one string to end of the other string .

#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,j=0,l1,l2,l3;
	char s1[20]="Hello",s2[10]="world";
	l1=strlen(s1);
	l2=strlen(s2);
	printf("Before concatenation string s1 is: %s length is :%d and string s2 is :%s length is :%d\n",s1,l1,s2,l2);
	for(i=0;i<=l2;i++)
	{
		s1[l1+i]=s2[i];
	}
	l3=strlen(s1);
	printf("After concatenation string is :%s and length is :%d\n",s1,l3);
	getchar();
}
