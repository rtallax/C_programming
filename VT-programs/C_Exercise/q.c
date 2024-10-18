#include<stdio.h>

int function(char *p)
{
	if(*p)
	   {
	       function(p+1);
	       printf("%c", *p);
	   }


}

int main()
{
	char c[]="welcome to Qualcomm";
	function(c);
	return 0;
}
