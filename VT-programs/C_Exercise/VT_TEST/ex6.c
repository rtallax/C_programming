#include<stdio.h> 
//#pragma(1) 
struct test 
{ 
int i; 
char j; 
char x;
char y;
}; 
int main() 
{ 
	printf("%ld\n",sizeof(struct test)); 
}
