#include<stdio.h>
int main()
{
	int num,out;
	for(num=312,out=0; num!=0;out=out*10+(num%10),num=num/10);
//	for(scanf("%d",&num),out=0; num!=0;out=out*10+(num%10),num=num/10);
		printf("%d ",out);
	return 0;
}
