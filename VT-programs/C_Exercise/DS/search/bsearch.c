#include<stdio.h>


int bsearch(int[],int,int,int);
int main()
{
	int a[20] = {1,3,5,7,9,11,15,18,19,20,22,25,27,30};
	int item,i,loc ;
	for(i=0;i<14;i++)
		printf("%d  ",a[i]);
	printf("\nEnter the item number\n");
	scanf("%d",&item);
	loc=bsearch(a,0,13,item);
	if(loc!=-1)
		printf("Item found at location %d\n",loc);
	else
		printf("Item not found\n");
}

int bsearch(int b[],int beg,int end,int item)
{
	int mid;
	if(end >= beg)
	{
		mid = (end+beg)/2;
		if(b[mid] == item)
		{
			return mid+1;
		}
		else if(b[mid] < item)
		{
			return bsearch(b,mid+1,end,item);
		}
		else
		{
			return bsearch(b,beg,mid-1,item);
		}
	}
	return -1;
}
