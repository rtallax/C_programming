#include<stdio.h>
#include<stdlib.h>
int selection(int a[],int n)
{
	int i,j=0,temp,small=0,pos=0;
        printf("Before sort\n");
        for(i=0;i<n;i++)
                printf("%d  ",a[i]);
        printf("\n");
	for(i=0;i<n;i++)
	{
		small=a[i];
		pos = i;
		for(j=i;j<n;j++)
		{
			if(a[j] < small) //ascending order
			{
				small = a[j];
				pos = j;
			}
		}
		temp = a[i];
		a[i] = a[pos];
		a[pos] = temp;
	}
	printf("\nSelection sorted elements\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
}
int main()
{
	int n;
	int a[10] = {2,4,6,8,3,5,7,9,10,1} ;
	n=(sizeof(a)/sizeof(a[0]));
	selection(a,n);
	return 0 ;
}
