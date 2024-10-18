#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Enter the number\n");
	scanf("%d",&x);
	y=(x &&(!(x &(x-1))));
	printf("%d\n",y);
	return 0;
}

