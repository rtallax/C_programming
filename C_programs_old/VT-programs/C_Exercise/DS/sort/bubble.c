#include<stdio.h>
#include<stdlib.h>

void bubble(int a[],int n)
{
	int i,j=0,temp;
	printf("Before sort\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j] > a[j+1]) // ascending order
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nBubble sorted elements\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
}
int main()
{
	int n;
	int a[10] = {2,4,6,8,3,5,7,9,10,1} ;
	n=(sizeof(a)/sizeof(a[0]));
	bubble(a,n);
	return 0 ;
}
