#include<stdio.h>
int main()
{
    typedef auto int myAutoInt;
    myAutoInt data = 4;
    printf("%d",data);
    return 0;
}
