/* First need to set the binary size	*/
#include<stdio.h>

#define bitsize sizeof(int)*8 	//32 bits[0-31]

int main()
{
	int i,num,index ,bit[bitsize] ;
	printf("Enter the number\n");
	scanf("%d",&num);
	index = bitsize-1;    //0-31 bits
	while(index>=0)
	{
		bit[index] = num & 0x01;
		index--;
		num=num>>1;
	}
	printf("Binary format is:\n");
	for(i=0;i<bitsize;i++)
	{
		printf("%d",bit[i]);
	}
	printf("\n");
	return 0;
}

