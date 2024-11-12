#include <stdio.h>

#define status(a,n) ((a>>n&0x01)?1:0)

int main()
{
int a=5;
printf("%d\n",status(a,1));
}
