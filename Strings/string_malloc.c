#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	char a[]= "Hellow world!";
	char *ptr;
	int len = strlen(a);
	int i=0;
	ptr = (char *)malloc(len*sizeof(char));
	for(i=0;i<len;i++)
	{
		ptr[i] = a[i];
	}
	printf("a=%s, ptr:%s\n",a,ptr);
	free(ptr);
}
