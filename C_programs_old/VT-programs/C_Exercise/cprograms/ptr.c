#include<stdio.h>
int main()
{
	char a=10;
	char *p = &a;
	printf("before %p\n",p);
	p++;
	printf("after %p\n",p);
}
