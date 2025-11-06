//scanf and gets
#include <stdio.h>
int main()
{
    char str[30];
    printf("Enter a string: ");
    gets(str);
    //scanf("%s",str);

    printf("%s",str);
}