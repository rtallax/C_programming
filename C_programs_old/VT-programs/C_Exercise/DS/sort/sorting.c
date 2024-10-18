#include<stdio.h>
#include<stdlib.h>

void bubble(int a[],int n)
{
	int i,j=0,temp;
	printf("Before sort\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[i]) // ascending order
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nBubble sorted elements\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
}

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
		for(j=i+1;j<n;j++)
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
	int n ,ch;
	int a[10] = {2,4,6,8,3,5,7,9,10,1} ;
	n=(sizeof(a)/sizeof(a[0]));
	printf("1.BUBBLE\n2.SELECTION\n3.EXIT\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : bubble(a,n);break;
		case 2 : selection(a,n);break;
		case 3 : exit(1);break;
		default : break;
	}
	return 0 ;
}
