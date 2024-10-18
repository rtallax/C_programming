#include <stdio.h> 
#define foo(m, n) m ## n 
void myfunc(); 
int main() 
{ 
	myfunc(); 
} 
void myfunc() 
{ 
	printf("%d\n", foo(2, 3)); 
}
