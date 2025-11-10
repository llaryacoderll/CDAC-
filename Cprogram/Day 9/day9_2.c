//char array using pointer notation

#include <stdio.h>
int main()
{
    char str1[]="sunbeam";
    printf("str1[2] = %c\n",str1[2]);
    printf("*(str1+2) = %c\n",*(str1+2));

    printf("str1[6] = %c\n",str1[6]);
    printf("*(str1+6) = %c\n",*(str1+6));

    printf("*(str1+2) = %c\n",*(str1+2)+2);
}