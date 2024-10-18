/* FIBONACII series is sum of two consecutive numbers as third
Eg:	0,1,1,2,3,5,8,13,21,34 ......(0+1=1,1+1=2,1+2=3 ......)	*/
#include<stdio.h>

int main()
{
	int i,a=0,b=1,c,limit ;
	printf("Enter the limit\n");
	scanf("%d",&limit);
	printf("Fibonacii Series is:\n");
	for(i=1;i<=limit;i++)
	{
		printf("%d,",a);
		c=a+b;
		a=b;
		b=c;
	}
	getchar();	
}
