#include<stdio.h>
int fun1(int,int);
int fun2(int,int);
int main()
{
	int opt,op1,op2,op3,op4;
	int (*p1)(int,int);
	int (*p2)(int,int);
	p1 = &fun1;
	p2 = &fun2;
	op1 = p1(1,2);
	op2 = p2(3,4);
	printf("enter the option\n");
	scanf("%d",&opt);
	if(opt)
	{
		op3=fun1(op1,4);
		printf("%d\n",op3);
	}
	else
	{
		op4 = fun2(op2,5);
		printf("%d\n",op4);
	}
	return 0;
}
int fun1(int a,int b)
{
	return a+b;
}
int fun2(int a,int b)
{
	return a+b;
}
