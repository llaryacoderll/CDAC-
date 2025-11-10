//Array syntaxes
#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    char str[]="sunbeam";
    printf("arr[2] = %d\n",arr[2]);
    printf("2[arr] = %d\n",2[arr]);

    printf("str[2] = %c\n",str[2]);
    printf("2[str] = %c\n",2[str]);
}