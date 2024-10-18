#include <stdio.h>

int main()
{
	//char str[] = "Mirafra";
	char *str = "Mirafra";
	char *ptr;
	printf("%s\n",str);
	ptr = str;
	//ptr[1] = 'M'; //right method
	str[1] = 'M'; //error segmentation
	printf("%s\n",str);
	printf("%s\n",ptr);
	return 0;
}
