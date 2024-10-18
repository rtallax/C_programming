#include<stdio.h>

int main()
{
	int a[10]= {1,5,9,3,7,11,17,18,12,20};
	int item,flag,i ;
	printf("Available numbers are:\n");
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	printf("\nEnter the number to search\n");
	scanf("%d",&item);
	for(i = 0;i<10;i++)
	{
		if(a[i] == item)
		{
			flag = i+1;
			break;
		}
		else
		flag = 0;
	}
	if(flag != 0)
	{
		printf("Val found at location %d\n",flag);
	}
	else
	{
		printf("Enter the value available in array\n");	
	}
}


