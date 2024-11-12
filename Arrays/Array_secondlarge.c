#include <stdio.h>

int main()
{
#if 1 
	int arr[] = {10,30,20,50,100,70,40};
	int i=0;
	int max=arr[i], second_max=arr[i];
	for(i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		if(max<arr[i])
		{
			second_max = max;
			max = arr[i];
		}
	}
	printf("Max:%d, second_max:%d\n",max,second_max);

#endif
}
