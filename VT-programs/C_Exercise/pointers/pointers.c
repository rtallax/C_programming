#include<stdio.h>
//#define constptr 
//#define ptrconst 2
#define general 

//#define  ptrconst

int main()
{
#ifdef general
	int a=10;
	int *ptr,**pt,***p;
	ptr=&a;
	pt=&ptr;
	p=&pt;
	***p=30;
	printf("addr of a=%ld\n",&a);
	printf("addr of single ptr=%ld\n",&ptr);
	printf("addr of double pt=%ld\n",&pt);
	printf("addr in single ptr=%ld\n",ptr);
	printf("addr in double pt=%ld\n",pt);
	printf("addr val stored in double pt=%ld\n",*pt);
	printf("addr in triple p=%ld\n",p);
	printf("addr stored in triple p=%ld\n",*p);
	printf("addr val stored in triple p=%ld\n",**p);
	printf("val of triple p=%d\n",***p);
#endif
#ifdef constptr
	int x=10;
	int y=20;
	int *const pointer1=&x  ;
	int *const pointer2=&y;
	pointer1=&y;	//error case const pointer points to particular(constant) address it cannot be changed
	printf("constpointer address=%ld and value=%d\n",pointer1,*pointer1);
	printf("constpointer address=%ld and value=%d\n",pointer2,*pointer2);
#endif
#ifdef ptrconst
	int const *pointer2;
	int m=100;
	int n=200;
	pointer2=&m;
	*pointer2=500;
	printf("pointerconst address=%ld and value=%d\n",pointer2,*pointer2);
#endif
	
	return 0;
}
