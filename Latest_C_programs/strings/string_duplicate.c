#include <stdio.h>
#include <string.h>

int main()
{
	int i=0,j=0,k=0;
	char str[] = "abcdaabbbccccfgddabcdef";
	int len=strlen(str);
	printf("%s\n",str);
	while(str[i] !='\0')
	{
		for(j=0;j<i;j++)
		{	
			if(str[i] == str[j])
			{
			printf("i=%d,j=%d\n",i,j);
				break;
			}
		}
		if(i==j)
		{
			str[k] = str[i];
			k++;
		}
		i++;
	}
	str[k] = '\0';
	printf("%s\n",str);
	return 0;
}


