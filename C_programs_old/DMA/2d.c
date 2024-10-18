#include<stdio.h>
#include<stdlib.h>

int main()
{
//	int *arr;
	int i,j,count=0,r=3,c=4 ;
	int *arr = (int *)malloc(r*c*sizeof(int ));
	printf("arr val=%d addr=%p\n",*arr,arr);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
			printf("%d ",*(arr+i*c+j) = ++count);

		}
		printf("\n");
	}
	printf("arr after val=%d addr=%p\n",*arr,arr);
	free(arr);
}
