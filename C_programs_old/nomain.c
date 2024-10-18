/* gcc -nostartfiles file.c is for below program */

#include<stdio.h> 
#include<stdlib.h> 

// entry point function 
//int nomain(); 

void _start()
{ 
// calling entry point 
//	nomain();
	printf("Function without Main\n"); 
 	_exit(0); 
} 
//int nomain() 
//{ 
//	puts("Geeksforgeeks"); 
//	return 0; 
//} 



/*
#include<stdio.h>
#include<stdlib.h>
 int nomain();

 void _start()
{
	nomain();
	exit(0);
}
int nomain()
{
	printf("Program without MAIN Fun\n");
	return 0;
}
*/


/* Second method is using Macro	*/
/*
#define fun main 

int fun(void)
{
	printf("Program without MAIN using MACRO\n");
	return 0;
}
*/
