
#include<stdio.h>
 int main()
 {
 	int i,sum=1,n ;
 	printf("Enter the number\n");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		sum=sum*i;
	}
	printf("Factorial for %d is %d\n",n,sum);
 }
