#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,num,inp,sum=0;
	FILE *fp;
	fp=fopen("sample.txt","w");
	if(fp==NULL)
	{
		printf("Failed to create FILE\n");
		return -1;
	}
	else
	{
		printf("Enter the integers\n");
		while(1)
		{
			scanf("%d",&num);
			if(num!=-1)
			{
				putw(num,fp);
			}
			else
			{
				break;
			}
		}
	}
	fclose(fp);
	fp=fopen("sample.txt","r");
	printf("Display numbers\n");
	while((inp=getw(fp)) !=EOF)
	{
		printf("%d\n",inp);
		sum=sum+inp;
	}
	printf("sum=%d\n",sum);
	fclose(fp);
	return 0;
	getchar();
}

