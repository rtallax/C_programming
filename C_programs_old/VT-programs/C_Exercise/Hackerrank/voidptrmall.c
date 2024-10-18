#include<stdio.h>

int main()
{
	char *ptr,**dptr;
	ptr=(void *)malloc(sizeof(void));
	**dptr=&ptr;
	printf("%p\n",ptr);
	printf("%p\n",*dptr);
	printf("%p\n",**dptr);
	
}
