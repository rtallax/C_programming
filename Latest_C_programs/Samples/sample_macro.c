#include <stdio.h>

#define mul(a,b) a*b

int main()
{
	int a=5,b=6;
//	printf("%d\n",mul((a+++b),(++a*b)));
	printf("%d,%d\n",(a+++b),(++a*b));
			return 0;
}
