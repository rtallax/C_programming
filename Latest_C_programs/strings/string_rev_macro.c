#include <stdio.h>
#include <string.h>
#define rev(str,i,len,temp) { \
	while(i<len) { \
	temp=str[i]; \
	str[i] = str[len]; \
	str[len] = temp; \
	i++; \
	len--; \
	} \
}

int main()
{
	char str[] = "Mirafra";
	printf("%s\n",str);
	int len = strlen(str)-1;
	int n = len-1;
	char temp;
	int i =0;
	rev(str,i,len,temp);
	printf("%s\n",str);
	return 0;
}
