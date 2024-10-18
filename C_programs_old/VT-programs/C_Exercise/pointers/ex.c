#include<stdio.h> 

int main() 
{ 
	// Pointer to an integer 
	int *p; 
	// Pointer to an array of 5 integers 
	int (*ptr)[5]; 
	int arr[5]={9,20,1,5,3}; 
	int brr[5]={10,30,50,70,90}; 
	// Points to 0th element of the arr. 
	p = arr; 
	// Points to the whole array arr. 
	ptr = &arr; 
	printf("p = %ld, ptr = %ld\n", *p, *(ptr[1]+1)); 
	p++; 
	ptr++; 
	printf("p = %ld, ptr = %lu\n", *p, *ptr); 
	return 0; 
} 
