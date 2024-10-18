///* Call by Value	*/
/*
#include<stdio.h>
void swap(int ,int);
int main()
{
	int a=10,b=20;
	printf("Before Swapping a=%d\t b=%d\n",a,b);
	swap(a,b);
	printf("After swapping a=%d\t b=%d\n",a,b);	
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("Swapping taken place in function a=%d\t b=%d\n",x,y);
}

*/

/* Call by reference	*/
#include<stdio.h>

void swap(int*,int*);
int main()
{
	int a=10,b=20 ;
	printf("Before Swap a=%d\t	b=%d\n",a,b);
	swap(&a,&b);
	printf("After Swap a=%d\t	b=%d\n",a,b);
}

void swap(int* x,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("Swap in Fun a=%d\t	b=%d\n",*x,*y);
}
