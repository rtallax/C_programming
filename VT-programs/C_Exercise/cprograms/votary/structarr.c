#include <stdio.h> 
struct point 
{ 
	int x; 
	int y; 
}; 
void foo(struct point*); 
int main() 
{ 
	struct point p1[] = {11, 22, 33, 44}; 
	foo(p1); 
} 
void foo(struct point p[]) 
{ 
//	printf("0--%d %d\n", p[0].x,(p+1)->y);
//	printf("1-- %d %d\n", p[1].x,(p+2)->y);
//	printf("2-- %d %d\n", p[2].x,p->y);
//	printf("3-- %d %d\n", p[3].x,p[3].y);
//	printf("4-- %d %d\n", p[4].x,p[4].y);
//	printf("5-- %d %d\n", p[5].x,p[5].y);
//	printf("0-- %d %d\n", p[0].x,p[0].y);
	printf("%d %d\n", p->x, ++p->x);
//	printf("%d %d\n", p->x, p[3].y); 
}
