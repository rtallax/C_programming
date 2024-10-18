#include <stdio.h>
int add(int a, int b)
{
	int c = a+b;
	return ++a;
}

int main()
{
	int a[7]={6,5,1,2,3,4};	
//	int c= a++;
//	printf("++a=%d\n",a++);
	
	int *b=a;
	printf("b[0]=%d\n",(b)[0]);
	printf("++b=%ld\n",++b);
	printf("++b=%ld\n",b++);
	printf(" *b:%d\n",*b);

	
//	int b = add(4,5);
//	printf("%d\n",add(5,5));
//	printf("%d\n",add(5,5));
}
