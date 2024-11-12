#include <stdio.h>
#include <string.h>

void rev(char *str, int start, int end)
{
	char temp;
	while(start < end)
	{
		temp = str[end];
		str[end] = str[start];
		str[start] = temp;
		start ++;
		end --;
	}
}
int main()
{
	int i=0,start=0,end=0;
	char str[] = "welcome to Mirafra";
	int len=strlen(str);
	while(str[i]!= '\0')
	{	
		if(str[i] == ' ')
		{
			end = i;
			rev(str,start,end-1);
			start = i+1;
		}
	i++;
	}
	rev(str,start,i-1);
	printf("%s\n",str);
	return 0;
}


