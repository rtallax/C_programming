/* Setting the nth bit of the number
Ex: n=16 => 0001 0000 ,set 3rd bit (bit starts from 0 ,so making the 3rd to 1 and ORing with number gives the output */

#include<stdio.h>

int main()
{
	int bitstatus,n,number ;
	printf("Enter the number\n");
	scanf("%d",&number);
	printf("Enter the bit position to be set\n");
	scanf("%d",&n);
	bitstatus = number;
	printf("number before Modification is %d\n",bitstatus);
	bitstatus = (1<<n) | number ;    //Logic
	printf("%d bit status after Modification is %d\n",n,bitstatus);
	return 0 ;
}
