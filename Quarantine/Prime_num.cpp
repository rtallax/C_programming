
/* Prime Number: Number which is having 2 factors including itself
Eg: 5	(1,5), 7(1,7) ......	*/

#include<stdio.h>

int main()
{
	int n,i,j,temp,limit,count=0 ;
	printf("Enter the limit:\t");
	scanf("%d",&limit);
	printf("Prime Numbers is:\n");
	for(j=1;j<=limit;j++)
	{
		count=0;
		temp=j;
		n=j;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
				count++;
		}
		if(count==2)
			printf("%d\n",temp);
	}
	getchar();
}
