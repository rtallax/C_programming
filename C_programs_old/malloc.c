#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b=4 ,*c,a;
	//char a;
	c=(int*)malloc(4*sizeof(int));
	printf("%d\n",sizeof(c));
	getch();
}
