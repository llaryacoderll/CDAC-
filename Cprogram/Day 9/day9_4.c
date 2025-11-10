//RO data section
#include<stdio.h>
int main(){
    char str[] = "sunbeam";
    char *ptr = "sunbeam";
    printf("str = %s\n",str);//sunbeam
    str[3] ='B';
    printf("str = %s\n",str);
    printf("ptr = %s\n",ptr);
    ptr[3] = 'B';
    printf("ptr = %s\n",ptr);//string literal


}