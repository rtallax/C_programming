#include<stdio.h>

int main()
{
	int i=0,val,var;
//	++i;
	val=!i;
	var=!i>10;
	printf("Val =%d\n",val);
	printf("Var after cond =%d\n",var);
	while(!i)
	{
		printf("in while\n");
		break;
	}
	return 0;
}
