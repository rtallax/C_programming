#include<stdio.h>
#include<string.h>
int main()
{
//	char name[10]={'i','s','m'}; 
	char name[10]="ism";
	int i=0; 
	while(name[i]!=‘\0’) 
	{ 
		printf(“%c”,name[i]); 
		i++; 
	}
	getch();
}
