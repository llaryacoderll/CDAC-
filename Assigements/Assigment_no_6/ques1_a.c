//strlen
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    printf("Enter a string: ");
    gets(arr);

    printf("Length of string is %d",strlen(arr));
}