/* Checking the nth bit of the number 
Ex: n=16 => 0001 0000 ,check 3rd bit (bit starts from 0 ,so making the 3rd bit position to 0th position and adding with 1 gives the bit value */

#include<stdio.h>

int main()
{
	int bitstatus,n,number ;
	printf("Enter the number\n");
	scanf("%d",&number);
	printf("Enter the bit position to be checked\n");
	scanf("%d",&n);
	bitstatus = (number>>n) & 0x01 ;     //Logic
	printf("%d bit status is %d\n",n,bitstatus);
	return 0 ;
}
