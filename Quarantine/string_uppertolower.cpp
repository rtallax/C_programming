#include<stdio.h>
#include<string.h>
void conversion(char[]);
int main()
{
	char name[]="RaVi*t#J@GOU&";
	printf("String before %s\n",name);
//	strlwr(name); //pre library
	conversion(name);
	printf("String After %s\n",name);
	getchar();
}

//User program
void conversion(char x[])
{
	int i=0;
	while(x[i]!='\0')
	{
		if(x[i]>='A' && x[i]<='Z')
		{
			x[i]=x[i]+32;
		}
		i++;
	}
}
