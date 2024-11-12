#include <stdio.h>
int sum=0;
int add(int a)
{
	sum +=a;
	return sum;
}

int main()
{
	int j=0;
	for(int i=5;i>j;i--) {
		printf("%d\n",add(i));
	}
//	printf("%d\n",add(5,5));
}
