#include <stdio.h>

char function (char *ch)
{
	char returnCh = *ch;
	return ++returnCh;
}
int main()
{
#if 0
	int a=5,b,c;
	b= ++a;
	c= a++;
	printf("a=%d,b=%d,c=%d\n",a,b,c);
#endif
#if 0
	int a[] = {1,2,3,4,5};
	int i=0;
	for(i=0;i<5;i++) {	
	printf("%d,%d\n",i,a[i++]);
	}
	for(i=0;i<5;i++) {	
	printf("%d,%d\n",i,a[++i]);
	}
#endif
#if 0
	struct {
		int a;
		long int b;
	}arr s;
//	struct_sample s;
	printf("%d\n",sizeof(s));
#endif
#if 0
union {
	int a;
	long int b;
} union_sample u;
#endif
#if 0
int a[] = {0, 1, 2, 3, 4}; 
int *p = a;
p= p+1;
printf("a[0]=%d,*(p)[0]=%d\n",a[0],(p)[0]);
#endif
#if 0 
char (*fun)(char *);
fun = &function;
//char str[] = 
//fun("ABCD");
printf("%c\n",(char *)fun("ABCD"));
#endif
#if 1
struct size {
	char a;
	struct size *next;
	int b;
};
struct size size1;
printf("%d\n",sizeof(size1));
#endif
}
