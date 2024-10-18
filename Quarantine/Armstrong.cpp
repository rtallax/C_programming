/* ARM STRONG :	sum of squares/cubes/etc of digits.
Eg:	153 	1^3+5^3+3^3
			1+125+27
			153					*/

#include<stdio.h>

int main()
{
	int i,sum=0,r,n,temp,c ;
	printf("Enter the Number:\t");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(temp==sum)
		printf("%d is Arm Strong Number\n",temp);
	else
		printf("%d is NOT Arm Strong Number\n",temp);
	getchar();
}
