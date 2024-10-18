#include <stdio.h>
#include<string.h>
int main(void) 
{
	char strin[100],str1[50],str2[70];//sizes your wish
	int i,j=0,k=0;
	printf("\nEnter your input string");
	scanf("%s",strin);
	//str1[j++]=strin[0];	//remove comment if first character doesnt get included
	for(i=0;i<strlen(strin);i++)
	{
		if(strin[i+1]!=strin[i])
			str1[j++]=strin[i];
		else
			str2[k++]=strin[i];
	}
	str1[j]=0x00;
	str2[k]=0x00;
	printf("Trimmed string:\n%s\n",str1);
	printf("Remaining string:\n%s\n",str2);
	return 0;
//	getchar();
}

