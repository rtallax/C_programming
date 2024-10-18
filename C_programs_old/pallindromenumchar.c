#include<stdio.h>
#include<string.h>
/*	//PALLINDROME is STRING
int main()
{
	char str[20]="MALAYALAM";
	int i,j,len;
	len=strlen(str)-1;
	while(len>1)
	{
		if(str[i++]!=str[len--])
		{
			printf("String is not PALLINDROME\n");
			return;
		}
	printf("String is PALLINDROME\n");
	getch();
	}
}
*/
//PALLINDROME is NUMBER
int main()
{
	int num,dup,rem,val=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	dup=num;
	while(num>0)
	{
		rem=num%10;
		val=val*10+rem;
		num=num/10;
	}
	printf("val is =%d\n",val);
	getch();
}
