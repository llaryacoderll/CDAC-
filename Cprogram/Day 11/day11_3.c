#include <stdio.h>
#define PI 3.14
int main()
{
    #ifndef PI
        #error "PI is not defined"
    #else
        printf("Pi is defined..");
    #endif

}