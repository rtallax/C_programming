#include<stdio.h>
//#include<bits/libc-header-start.h>

#pragma pack(1)
struct Emp
{
//	char name;
//	int id;
//	float sal;
	struct Emp *ptr;
	int *ptr1;
};
int main()
{
	struct Emp Details;
	int *p;
	printf("size of Details=%ld\n",sizeof(Details));
	printf("size of pointer=%ld\n",sizeof(*p));
}
