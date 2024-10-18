#include<stdio.h>

//call by reference
int sum(int *a , int *b)
{
	int var;
	*a=100,*b=200;
	var=*a+*b;
	return var;
}
//call by value
int sub(int a ,int b)
{
	int su;
	a=100,b=50;
	su=a-b;
	printf("substraction =%d\n",su);
	return su;
}

int main()
{
	int a=10 , b=20,c,d ;
	printf("IN MAIN Before sub a=%d  b=%d\n",a,b);
	c=sub(b,a);
	printf("IN MAIN After sub a=%d  b=%d\n",a,b);
	printf("IN MAIN After sub c=%d\n",c);
	printf("IN MAIN Before sum a=%d  b=%d\n",a,b);
	d=sum(&a,&b);
	printf("IN MAIN After sum a=%d  b=%d\n",a,b);
	printf("IN MAIN After sum c=%d\n",d);
	return 0;
}
	
	
	
