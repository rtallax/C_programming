 #include <stdio.h> 
int main() 
{
	int val; 
	switch (val=printf("Do")) 
	{ 
		case 1: printf("First\n"); break; 
		case 2: printf("Second\n"); break; 
		default: printf("Default\n"); break; 
	} 
	printf("%d\n",val);
}
