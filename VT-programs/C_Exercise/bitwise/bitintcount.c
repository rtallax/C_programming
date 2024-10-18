#include<stdio.h>

int main()
{
	int count=0,b;
	printf("Enter the variable\n");
	scanf("%d",&b);
	while(b)
	{
		b=b/2;
		count++;	
	} 
	printf("val=%d count=%d\n",b,count);
}
