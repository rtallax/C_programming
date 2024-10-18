#include<stdio.h>
#include<string.h>
int main()
{
	char str[50]="AAABBBCCDDDEEE";
	char str1[50],str2[50];
	int count=0,count1=0,count2=0,i=0,k=0,l=0,len ;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i+1]!=str[i])
		{
			str1[k++]=str[i];
			count1++;
		}
		else
		{
			str2[l++]=str[i];
			count2++;
		}
	} 
	str1[k]='\0';
	str2[l]='\0';
	printf("Actual string=%s,count=%d\n",str,len);
	printf("Before Removing string1=%s,count1=%d\n",str1,count1);
	printf("After Removing string2=%s,count2=%d\n",str2,count2);
	getchar();
}
