#include <stdio.h>
#define print(a,b) printf(#a"=%d" #b"=%d",a,b);
int main()
{
    int a=5,b=10;
    print(a,b);
}