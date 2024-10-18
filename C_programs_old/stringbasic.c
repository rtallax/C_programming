#include<stdio.h>
#include<string.h>
int main()
{
	char *str = "Intel";
	int len;
//	printf("Enter the name\n");
//	scanf("%s",str);
//	printf("%s\n",str);
	len=strlen(str);
	printf("string size=%d\n",sizeof(str));
	printf("string size pointer=%d\n",sizeof(*str));
	printf("string len =%d\n",len);	
//	getch();
}
