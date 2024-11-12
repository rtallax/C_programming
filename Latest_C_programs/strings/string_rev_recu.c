#include <stdio.h>
#include <string.h>

char rev(char str[], int len,int i)
{
	char temp;
	if(i<len) {	
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		printf("%d,%d\n", i,len);
		return rev(str,--len,++i);
	}
}

int main()
{
	char str[] = "Mirafra", temp;
	int i,len=strlen(str);
	printf("%s\n",str);
	rev(str,--len,0);
	printf("%s\n",str);
	return 0;
}
