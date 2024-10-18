// PERFECT No: sum of factors of given number except itself

// Example   n=6   , factors of 6 is 1,2,3,4,5,6    The Number(6) is divisible by factors which leaves remainder zero(0) are 1,2,3,except itself so, 6 is perfect number
#include<stdio.h>

int main()
{
	int i,sum=0,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(n%i==0)     //i=1,2,3 only
		{
			sum=sum+i;
		}
	}
	if(n==sum)
		printf("Given Number is PERFECT\n");
	else
		printf("Given Number is not PERFECT\n");
	getchar();
}

