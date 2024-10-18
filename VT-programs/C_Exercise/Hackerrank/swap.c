#include<stdio.h>
void swap(int *,int *);
int main()
{
	int x=1;
	int y=2;
	swap(&x,&y);
	printf("x=%d y=%d\n",x,y);
	return 0;
}
/*
void swap(int *a, int *b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("In function a=%d  b=%d\n",a,b);
}
*/
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("In function a=%d  b=%d\n",*a,*b);
}
