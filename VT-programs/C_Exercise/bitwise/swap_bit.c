#include<stdio.h>

int main()
{
	int var ;
	printf("Enter he value ex: 0460\n");
	scanf("%d",&var);
	printf("before swap var=%02x\n",var);
	var=(((var<<4)&0xF0F0) | ((var>>4)&0x0F0F));
	printf("after swap var=%02x\n",var);
	printf("after swap var=%d\n",var);
}

