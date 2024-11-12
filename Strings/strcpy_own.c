#include <stdio.h>

char *strcpy_own(char *dest, const char *src)
{
	char *ptr;
	ptr = dest;
	while(*src!='\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return ptr;
}

int main()
{
	char s[] = "Hello World!";
	char des[50];
	strcpy_own(des,s);
	printf("src:%s, dest:%s\n",s,des);

}
