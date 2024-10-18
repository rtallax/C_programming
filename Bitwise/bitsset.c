#include<stdio.h>

int main()
{
	int a[]={1,3,7,255};
	int i;
	int count=0;
	int n;
	printf("size of 'a' is %d\n",sizeof(a));
	for(i=0;i<(sizeof(a)/sizeof(a[0]));i++)
	{
		for(n=0;n<32;n++)
		{
			if(a[i]>>n&0x01==1)
				count++;
		}
		printf("no of bits set in %d\t is %d\n",a[i],count);
		count=0;
			}
	return 0;
}
