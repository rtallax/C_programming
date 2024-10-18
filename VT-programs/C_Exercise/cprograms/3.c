#include <stdio.h>
void print()  
{
    printf("Hello World!");
}
void helloworld(void (*f)())  
{
    f();
}
int main(void)  
{
    helloworld(print);
    return (0);
}
/*
void striter(char *s, void (*f)(char *)) 
{
    if (s)
    {
	int i;
        for (i = 0; s[i]; i++)
        {
            f(&s[i]);
        }
    }
    return ;
}*/
