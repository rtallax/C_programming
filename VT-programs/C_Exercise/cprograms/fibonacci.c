#include<stdio.h>

int main()
{
	int n,i, next,prev=0,pres=1 ;
	printf("Enter the fibonacci series\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		printf("%d  ",prev);
		next=prev+pres;
		prev=pres;
		pres=next;
	}
	return 0;
}
		
		
		
