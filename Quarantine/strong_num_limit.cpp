/* STRONG Number: Sum of factorial of the given Number is equal to that Number
Eg:145		1!+4!+5!
			1+24+120=145		*/

#include<stdio.h>

int main()
{
	int r,sum=0,fact=1,n,limit,i,j,temp ;
	printf("Enter the Range:\t");
//	scanf("%d",&n);
	scanf("%d",&limit);
	printf("Strong Numbers is :\n");
	for(j=1;j<=limit;j++)
	{
		n=j;
		temp=j;
		sum=0;
		while(n>0)
		{
			r=n%10;
			fact=1;	
			for(i=r;i>=1;i--)
			{
				fact=fact*i;
			}
			sum=sum+fact;
			n=n/10;
		}
		if(temp==sum)
			printf("%d\n",temp);
	}
	getchar();
}
