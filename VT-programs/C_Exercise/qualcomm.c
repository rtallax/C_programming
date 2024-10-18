#include<stdio.h>
 
void function(char *p)
{
   if(*p)
   {
       function(p+1);
       printf("%c", *p);
   }
}
 
int main()
{
   char a[] = "Welcome to Qualcomm";
   function(a);
   return 0;
}
