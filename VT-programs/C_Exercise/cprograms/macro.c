#include <stdio.h>
#define PRINT(var,data) do {\
                            if(var < data)\
                                {\
                                    printf("Aticleworld");\
                                    ++var;\
                                }\
                            }while(1);
int main()
{
    PRINT(0,2);
    return 0;
}
