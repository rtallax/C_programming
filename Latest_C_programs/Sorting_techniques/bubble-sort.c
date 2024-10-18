#include <stdio.h>
#include <stdlib.h>

void bubble(int arr[], int n)
{
	int i=0,j=0,k=0,temp=0;
	for(k=0;k<n;k++)
		printf("%d ",arr[k]);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\nAfter bubble sort\n");
	for(k=0;k<n;k++)
		printf("%d ",arr[k]);
}

void selection(int arr[],int n)
{
	int i=0,j=0,k=0,temp=0,min_element=0;
	for(k=0;k<n;k++)
		printf("%d ",arr[k]);
	for(i=0;i<n;i++)
	{
		min_element = i;
		for (j=i;j<n;j++)
		{
			if(arr[min_element] > arr[j])
				min_element = j;
		}
		temp = arr[min_element];
		arr[min_element] = arr[i];
		arr[i] = temp;
	}	
	printf("\nAfter selection sort\n");
	for(k=0;k<n;k++)
		printf("%d ",arr[k]);
}
int main()
{
	int arr[] = {1,3,2,6,4,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	//bubble(arr,len); //compares adjacent elements and swaps them
	selection(arr,len);
	return 0;
}
