#include<stdio.h>
int least(int []);
int charcount(char []);
int main()
{
	char strs[3][8] = {"flower","flow","flight"};
	int i=0,j=0,k=0,len,count[3];
	len = (sizeof(strs)/sizeof(strs[0]));
//	printf("len=%d\n",len);
	for(i=0,k=0;i<len,k<len;i++,k++)
	{
		count[k]=charcount(strs[i]);
		printf("count =%d   ",count[k]);
	}
	arranged=least(count);
}
	
int charcount(char str[])
{
	int i=0,j=0,count=0 ;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}

int least(int c[])
{
	int i=0,j=0,least=0,size,temp=0;
	size=(sizeof(c)/sizeof(c[0]));
	for(i=0;i<size;i++)
	{
		j=i+1;
		if(c[i] > c[j])
		{
			temp=c[j];
			c[j] =c[i];
			c[i]=temp;
		}
	}
}
