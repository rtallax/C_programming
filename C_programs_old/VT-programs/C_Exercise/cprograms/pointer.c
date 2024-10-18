#include <stdio.h>
int main()
{
    char var = 10;
    void *ptr = &var;
    printf("%d %d\n",*(char*)ptr,++(*(char*)ptr));
    return 0;
}
