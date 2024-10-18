#include<stdio.h>

//static int a=1;
//int add()
//{
//	static int var;
//	var=10;
//	printf("static val=%d\n",var);
//}
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		static int var=100 ;
		var--;
	printf("%d\n",var);
	}
//	add();
	return 0;	
}
