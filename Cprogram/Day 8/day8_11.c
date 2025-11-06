#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="sunbeam";
    printf("Size of str = %d\n",sizeof(str));
    printf("Size of strlen = %d\n",strlen(str));

    char str2[]="SunBeam\0info";
    printf("Size of str = %d\n",sizeof(str2));
    printf("Size of strlen = %d\n",strlen(str2));

    return 0;
}