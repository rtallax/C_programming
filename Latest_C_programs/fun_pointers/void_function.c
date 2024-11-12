#include <stdio.h>

void fun()
{
	printf("In func function call\n");
}

int main()
{
	int (*f)();
	f =&fun;
	f();
	return 0;
}
