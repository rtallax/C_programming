#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="abcdabcdefg";
	int i=0,j,len=strlen(a);
	printf("Length of str=%d\n",len);
	printf("Before : %s\n",a);
	while(a[i]!='\0')
	{
		j=i+1;
		while(a[j]!='\0')
		{
			if(a[i] == a[j])
			{
				a[j] == a[j+1];
			}
			j++;
		}
	i++;
	}
	printf("After : %s\n",a);
}
