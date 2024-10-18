#include <stdio.h>
#include <string.h>

int min_string(char **str, int n)
{
	int i=0,j=0,len=0;
	len = strlen(str[0]);
	for(i=0;i<n;i++)
		if(strlen(str[i]) < len)
			len = strlen(str[i]);
	return len;
}

char *prefix_repeat(char **arr,int n)
{
	int i=0,j=0;
	char current=0;
	char prefix[10];
	int min_len=min_string(arr,n);
	printf("min_len:%d\n",min_len);
	for(j=0;j<min_len;j++)
	{
		current = arr[0][j];
		for(i=0;i<n;i++)
		{
			if(arr[j][i] != current)
			{
				prefix[j] = '\0';
				return prefix;	
			}
		}
		prefix[j] = current;
	}
	prefix[j++] = '\0';
	printf("%s\n",arr);
}

int main()
{
	char *str[] = {"flowers","flag","flash"};
	int n = sizeof(str)/sizeof(str[0]);
	prefix_repeat(str,n);
	return 0;
}
