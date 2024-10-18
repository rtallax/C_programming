#include<stdio.h>
#include<unistd.h>
int main(void)
{
	printf("Before fork\n");
	fork();
	fork();
	printf("after fork\n");
}
