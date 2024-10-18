#include<stdio.h>
int main(){
	int i = 5;
	void *vptr;
	vptr = &i;
	printf("\nValue of iptr = %d ", *vptr);
	return 0;
}
