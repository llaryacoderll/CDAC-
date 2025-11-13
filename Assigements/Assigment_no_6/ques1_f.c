//strrev()
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    printf("Enter a String: ");
    gets(str1);

    strrev(str1);
    printf("String resvere : %s",str1);
}