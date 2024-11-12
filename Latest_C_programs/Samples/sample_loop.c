#include <stdio.h>

#define loop(x) \
{ \
for(int i=0;i<x;i++) { \
	printf("%d\n",i); \
} \
}

int main()
{
int d=5;
loop(d);
return 0;
}
