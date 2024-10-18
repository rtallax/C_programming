#include <stdio.h>
#include <string.h>

void remove_duplicate(char *str)
{
	int i=0,j=0,dst=0;
	while(str[i]!= '\0')
	{
		for(j=0;j<i;j++)
		{
			if(str[i] == str[j])
			{
				//j++;
				break;
			}
		}	
		if(i == j)
		{
			str[dst] = str[i];
			dst++;
		}	
		i++;	
	}
	str[dst] = '\0';	
}	

void remove_duplicate_method2(char *str)
{
	int i=0,j=0,k=0;
	while(str[i]!='\0')
	{
		j=i+1;
		for (;str[j];j++)
		{
			if(str[i] == str[j])
			{
				memmove(str[i],str[j+1],strlen(str)+'\0');
			}		
		}	
		i++;
	}	
}	
int main()
{
	char str[] = "aabbbccccdddddaabcd";
	printf("Before: %s\n",str);
//	remove_duplicate(str);
	remove_duplicate_method2(str);
	printf("After: %s\n",str);
}
