#include<stdio.h>
/*		IN Type Casting Data may loss	*/
/*      Normal TYPE CASTING		*/
/*
int main()
{
	int a=5,b=2; // because a and b are integer type
	float c;
	c=a/b;   //value in float type
	printf("value is %f\n",c);
}
*/

/*		IMPLICIT CASTING		*/
/*
int main()
{
	int a=5,b=2,c; // because a and b are integer type
	c=a/b;   //value in float type
	printf("value is %c\n",c);
	getch();
}
*/
/*		EXPLICIT CASTING		*/
int main()
{
	int a=5,b=2,c; // because a and b are integer type
	c=a/b;   //value in float type
	printf("value is %c\n",(char)c);
	getch();
}

