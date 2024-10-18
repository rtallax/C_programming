#include<stdio.h>
 
void function(int *a,int *b)
{
	*a^=*b^=*a^=*b ;
}
int main()
{
	int x1=15,x2=25;
	function(&x1,&x2);
	printf("%d %d\n",x1,x2);
	return 0;
}
