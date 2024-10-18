/* PALLINDROME : which is similar to original when counts from the back 
Eg: 5225=5225, 121=121,AMMA=AMMA	*/

#include<stdio.h>

int main()
{
	int n,r,temp,sum=0 ;
	printf("Enter the Number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
		printf("Given Number is Pallindrome\n");
	else	
		printf("Given number is not Pallindrome\n");
	getchar();
}
