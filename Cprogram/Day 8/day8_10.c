#include <stdio.h>
int main()
{
    char str[30];
    printf("Enter a String: ");
    //scanf("%[A-Z]",str);
    //scanf("%[^A-Z]",str);
    scanf("%[a-z]",str);


    printf("%s",str);
}