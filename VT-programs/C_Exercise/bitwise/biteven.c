#include<stdio.h>

int main()
{
	int count=0,b;
	printf("Enter the variable\n");
	scanf("%d",&b);
	while(b)
	{
		if(b&(b-1))
			count++;
		b--;	
	} 
	printf("val=%d count=%d\n",b,count);
}
