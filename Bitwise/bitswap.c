#include<stdio.h>
#define bitswap
int main()
{
	int a=0x1234 ;
#ifdef bitswap
	int m,n,xor,valm,valn ;
	printf("Before swap a=%02X\n",a);
	printf("Enter the bits pos 'm' and 'n'\n");
	scanf("%d%d",&m,&n);
	valm = ((a>>m)&0x01);
	valn = ((a>>n)&0x01);
	xor = valm^valn ;
	a= (a^((xor <<m) | (xor <<n)));
	printf("%02X\n",a);
#endif
#if 0
#if rangeswap
	int m,n,i,j ;
	printf("Before swap a=%02X\n",a);
	printf("Enter the bits range from 'm' to 'n'\n");
	scanf("%d%d",&m,&n);
	for(i=n;i<m;i++)
	{
#endif
#endif
	
}
