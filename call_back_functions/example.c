#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr;
	ptr = (int *)malloc(5);
	*ptr = 5 ;
	printf("ptr:%ld, *ptr:%ld, &ptr:%ld\n", ptr,*ptr,&ptr);
	free(ptr);
	ptr = NULL;
	printf("ptr:%ld, *ptr:%ld, &ptr:%ld\n", ptr,*ptr,&ptr);
//	while(1);
}
