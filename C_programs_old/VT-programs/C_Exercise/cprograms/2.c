#include<stdio.h>
void display(void (*p)(int ))  
{
	int i;
	for(i=1;i<=5;i++)  
	{  
		(*p)(i);  
	}  
}  
void print_numbers(int num)  
{  
	printf("%d  ",num);  
}  
int main()  
{  
//	void (*p)(int);     // void function pointer declaration  
	printf("The values are :");  
	display(print_numbers);  
	return 0;  
}
