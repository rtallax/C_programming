#include<stdio.h>
#define set 1
#define clear 0
#define toggle 2
#define swap 3
#define nibble_swap 4
#define short_bit_swap 5
#define last_first_bit 6
#define bit_swap 7
#define whole_bits_swap 8
#define alternate_bitswap 9

#define bit alternate_bitswap

int main()
{
	int a=20,b=255,n,bit_1,bit_2,xor,pos1,pos2 ;
	long c=32768 , d= 2147483648 ; // 2^31 +2^30 3221225472 //2^31 2147483648 
	printf("Entered values a=%d\tb=%d\tc=%d\td=%d\n",a,b,c,d);
	printf("Hex value a=%02x\tb=%02x\n",a,b);
	printf("Hex value c=%02x\td=%02x\n",c,d);
#if  bit == 1 
	printf("Enter the position to set the bit\n");
	scanf("%d",&n);
	a=a|(1<<n);	
	printf("HEX value of variable a is %02x after bit set\n",a);
#elif bit == 0
	printf("Enter the position to clear the bit\n");
	scanf("%d",&n);
	a=a&(~(1<<n));	
	printf("HEX value of variable a is %02x after bit clear\n",a);
#elif bit == 2 
	printf("Enter the position to toggle the bit\n");
	scanf("%d",&n);
	a=a^(1<<n);	
	printf("HEX value of variable a is %02x after bit toggle\n",a);
#elif bit == 3
	a=a^b;
	b=a^b;
	a=a^b;	
	printf("HEX value of variable after swap a =%02x and b=%02x \n",a,b);
#elif bit == 4
	a=(((0X0F)&(a>>4))|((0XF0)&(a<<4)));
	printf("value of 'a' after swap is %d\n",a); 
	printf("HEX value of variable after nibble swap a =%02x\n",a);
#elif bit == 5
	c=(((0x0000FFFF)&(c>>16))|((0xFFFF0000)&(c<<16)));
	printf("value of 'c' after swap is %ld\n",c); 
	printf("HEX value of variable after nibble swap c =%02x\n",c);
#elif bit == 6
	d=(((0X0000000F)&(d>>31))|((0XF0000000)&(d<<31)));
	printf("value of 'd' after swap is %ld\n",d); 
	printf("HEX value of variable  swap d =%02x\n",d);
#elif bit == 7
	printf("before swaping a=%02x\n",a);
	printf("Enter the bits to be swaped i.e between '0 to 31' \n");
	scanf("%d%d",&bit_1,&bit_2);
	pos1=bit_1;
	pos2=bit_2;
	bit_1=((a>>bit_1)&1);
	bit_2=((a>>bit_2)&1);
	xor=(bit_1^bit_2);
	a=(a^((xor<<pos1)|(xor<<pos2)));
	printf("After Swapping a=%02x\n",a);
#elif bit == 8
	int var,var_out,size,i,j,bit1,bit2,Xor;
	size=(8*sizeof(var));
	printf("Enter variable to swap \n");
	scanf("%d",&var);
	printf("Before swap var=%02x\n",var);
	for(i=0,j=size-1;j>i;j--,i++)
	{	
		bit1=((var>>i)&01);
		bit2=((var>>j)&01);
		Xor=(bit1 ^ bit2);
		var=(var^(Xor<<i | Xor<<j));
		var|=var;
	}
	printf("After Swapping var=%02x\n",var);
#elif bit == 9
	int var;
	printf("Enter variable to be swapped alternately\n");
	scanf("%d",&var);
	printf("Before swap var=%02x\n",var);
	var = ((var&0xAA)>>1) | ((var&0x55)<<1);
	printf("After swap var = %02x\n",var);
#endif
	return 0;
}
