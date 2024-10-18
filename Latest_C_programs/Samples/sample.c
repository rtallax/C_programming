#include <stdio.h>
int add(void* a)
{
	int *ptr=(int *)&a;
	printf("*ptr=%d, ptr:%lld\n",*ptr,ptr);
}

int main()
{
	int i=5;

	add(i);
//	printf("%d\n",add(5,5));
}
