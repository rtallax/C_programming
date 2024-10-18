#include<stdio.h>
#include<stdlib.h>

int maloc()
{
	printf("In MALLOC FUN\n");
	int n,i,sum=0;
	int *ptr ;
	printf("Enter the array size\n");
	scanf("%d",&n);
//	printf("value in ptr and addr=%ld\n",sizeof(ptr));
	ptr=(int *)malloc(n*sizeof(int));
	printf("PTR=%d\n",*ptr);
	printf("PTR=%d\n",ptr);
	printf("Enter the Elements of array\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	ptr=realloc(ptr,5);
	printf("ARRAY =%d\n",sum);
	free(ptr);
	return 0;
}
int caloc()
{
	printf("In CALLOC FUN\n");
	int n,i,sum=0;
	int *ptr;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("sum=%d\n",sum);
//	free(ptr);
	realloc(ptr,0);	//instead of free
	return 0;
}

int main()
{
	maloc();
//	caloc();

	return 0;
}
