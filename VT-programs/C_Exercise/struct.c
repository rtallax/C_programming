#include<stdio.h>
#pragma pack(1)
struct A
{
	unsigned char x;
	unsigned int y;
	unsigned int z;
}str;

int main()
{
	struct A m;
	struct A *ptr,*p;
//	ptr=&str;  //method 1
	ptr=&m;	   // method 2
	printf("%d\n",ptr);
	p=(unsigned char*)(ptr)+10;
	p->y=100;
	printf("%d\n",p->y);
	printf("%d\n",(*p).y);
	printf("one byte %d\n",(unsigned char*)(ptr)+1);
	printf("two bytes %d\n",(unsigned char *)ptr+2);
	printf("ten bytes %d\n",(unsigned char *)ptr+10);
	printf("%d\n",++ptr);
//	printf("%d\n",sizeof(struct A));
	return 0;
}
