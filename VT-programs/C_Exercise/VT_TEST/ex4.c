/*
#include <stdio.h> 
struct point 
{ 
int x; 
int y; 
}; 
void foo(struct point*); 
int main() 
{ 
	struct point p1[] = {1, 2, 3, 4, 5}; 
	foo(p1); 
} 
void foo(struct point p[]) 
{ 
	printf("%d %d\n", p->x, p[3].y); 
}
*/
//OUTPUT: 1 0 


#include <stdio.h> 
struct point 
{ 
int x; 
int y; 
}; 
static void foo(struct point*); 
int main() 
{ 
	struct point p1[] = {1, 2, 3, 4, 5}; 
	foo(p1); 
} 
static void foo(struct point p[]) 
{
	static int tmp=0; 
	printf("%d %d\n", p->x, p->x); 
}
// OUTPUT: 2 2

