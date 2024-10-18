#include<stdio.h>

struct k
{
	char r[10];
}key;

struct name
{
	char r[6];
	int var;
	struct key* g[4];
};

int main()
{
	printf("%d\n",sizeof(struct name));
}
