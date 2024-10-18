#include<stdio.h>

void fun(int n,int j)
{
	if(j>=n)
		return ;
	if(n-j> 0 && n-j >= j)
		printf("[%d %d] ",j,n-j);
	fun(n,j+1);
}
int main()
{
	int n=8;
	fun(n,1);
	return 0;
}
