/* Recursion:
Eg:
	fact(3)-------->	fact(3-1)------->fact(2-1)--------->fact(1-1)
			<-----------return<----------return<-------------return 1;		*/
			
#include<stdio.h>
int fact(int);
int main()
{
	int n,res ;
	printf("Enter the Factorial Number:\t");
	scanf("%d",&n);
	res=fact(n);
	printf("Factorial of %d is %d\n",n,res);
	getchar();
}
int fact(int n)
{
	int res;
	if(n==1)
		res=1;
	else
		res=n*fact(n-1);
	return res;
}
