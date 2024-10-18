/* Clear the nth bit of the number
Ex: n=16 => 0001 0000 ,Clear 3rd bit (bit starts from 0 ,so making the 3rd to 1 and NOT the result and AND with the number */

#include<stdio.h>

int main()
{
	int bitstatus,n,number ;
	printf("Enter the number\n");
	scanf("%d",&number);
	printf("Enter the bit position to clear\n");
	scanf("%d",&n);
	bitstatus = number;
	printf("number before Modification is %d\n",bitstatus);
	bitstatus = number & (~(1<<n)) ;    //Logic
	printf("%d bit status after Modification is %d\n",n,bitstatus);
	return 0 ;
}
