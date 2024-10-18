#include<stdio.h>

int main()
{
	int a[6]={1,4,5,9,0,8};
	int i,j,val ;
	for(i=0;i<6 ;i++)
	{	
		for(j=i;j<6;j++)
		{	
			if(a[i]>a[j])
			{	
				val=a[i];
				a[i]=a[j];
				a[j]=val;
			}
		}
		printf("%d  ",a[i]);
	}
	return 0 ;
}

