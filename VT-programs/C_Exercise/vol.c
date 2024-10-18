/*
#include <stdio.h> 
int main(void) 
{ 
	const int local = 10; 
//	int *ptr = (int*) &local; 
	int *ptr = &local;
	printf("Initial value of local : %d \n", local); 

	*ptr = 100; 

	printf("Modified value of local: %d \n", local); 

	return 0; 
} 


*/

#include <stdio.h> 
int main(void) 
{ 
    const int local = 10; 
    int *ptr = (int*) &local; 
    *ptr = 100; 
    printf("Modified value of local: %d \n", local); 
    return 0; 
} 
