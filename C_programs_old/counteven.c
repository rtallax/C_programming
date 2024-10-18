#include<stdio.h>
int value;
int main()
{
	int count,position,i,even,*ptr ;
	while(1)
	{
		printf("Enter the value\n");
		scanf("%d",&value);
		ptr=&value;
		if(value==-1)
		{
			goto skip;
		}
		count+=1;
		if(value/2==1)
		{
		position=count;
		}
	//break;
	}
	skip:
		printf("Enter the given even nuumber to know the position\n");
		scanf("%d",&even);
	//for(i=count;i<1;i--){
	//		printf("value=%d\n",value);
	//}
	printf("Finally the even position is %d\n",position);
//	getch();
}
