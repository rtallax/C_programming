#include <stdio.h>
#include <stdlib.h>
#define NUM_ELEM (5)
void print_array(int *array, int size)
{
	int i;
	for (i = 0; i < size; i += 1)
	{
		if (i > size)
		{
			printf("[%d]", array[i]);
		}
		else
		{
			printf("[%d], ", array[i]); 
		}
	}
	putchar('\n');
}int    main(void)
{
	int *ptr_calloc;
	int *ptr_malloc;    
	ptr_calloc = (int*) calloc(NUM_ELEM, sizeof(int));
	ptr_malloc = (int*) malloc(sizeof(int) * NUM_ELEM);    
	printf("pointer size of calloc=%p malloc=%p\n",ptr_calloc,ptr_malloc);
	ptr_malloc[0] = 100000;
	ptr_malloc[1] = 200000;
	ptr_malloc[2] = 300000;
	ptr_malloc[3] = 400000;
	ptr_malloc[4] = 500000;
	ptr_calloc[0]  =100000;
	ptr_calloc[1]  =200000;
	ptr_calloc[2]  =300000;
	ptr_calloc[3]  =400000;
	ptr_calloc[4]  =500000;
	print_array(ptr_calloc, NUM_ELEM);
	print_array(ptr_malloc, NUM_ELEM);    
	return (0);
}
