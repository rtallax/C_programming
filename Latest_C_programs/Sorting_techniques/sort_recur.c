#include <stdio.h>
int recursive_re(int a[], int size,int i, int j)
{
	int temp;
	while(size--)
	{
		if(a[i] > a[j])
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		i--,j++; 
	printf("%d ",a[i]);	
		recurisve_re(a,size,i,j);	
	}
	
}

int main()
{
	int a[] = {5,1,4,3,7,2};
	int size = sizeof(a)/sizeof(a[0]);
	int i=0,j=0;
	recursive_re(a,size,size,j);
	return 0;
}
