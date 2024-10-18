#include<stdio.h>

int fact(int a)
{
	
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else
		return a*fact(a-1);
}

int sum(int b)
{
	if(b==0)
		return 0;
	else
	{	
		return b+sum(b-1);
	}
}
int main()
{
	int var,n,add ;
	printf("Enter the value\n");
	scanf("%d",&n);
	var=fact(n);
	add=sum(n);
	printf("factorial =%d\n",var);
	printf("sum =%d\n",add);
	return 0;
}
