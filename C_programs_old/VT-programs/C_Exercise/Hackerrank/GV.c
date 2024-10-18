#include<stdio.h>
int x=3;
int y=5;
int main()
{
	int x=x;
	static int y;
	y=y;
	printf("%d %d\n",x,y);
}
