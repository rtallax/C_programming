#include<stdio.h>
int main()
{
	int i=2;
	void *vptr;
	vptr=&i;
	//*vptr=10;
	printf("%d\n",*(int *)vptr);
	printf("%d\n",i);
	*(int *) vptr = 20;
	printf("%d\n",*(int *)vptr);
	return 0;
}
