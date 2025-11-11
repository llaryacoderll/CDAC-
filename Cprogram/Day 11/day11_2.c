#include <stdio.h>
#define PI 3.14
int main()
{
    #ifdef PI
        printf("Pi is defined");
    #else
        printf("PI is not defined..");
    #endif
}