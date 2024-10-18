#include <stdio.h>

#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)NULL)->ELEMENT))

struct foo
{
	int     i;
	char    c;
};

int main()
{
	int size;
	size=OFFSETOF(struct foo, c);
	printf("%d\n",size);
	return 0;
} 
