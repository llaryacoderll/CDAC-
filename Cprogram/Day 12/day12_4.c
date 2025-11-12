// Self-referential structure
#include<stdio.h>
struct demo
{
    int num1;
    char ch;
    struct demo *ptr;
};
int main(){
    struct demo d1;
    d1.num1 = 10;
    d1.ch = 'A';
    d1.ptr = NULL;

    struct demo d2;
    d2.num1 = 20;
    d2.ch = 'E';
    d2.ptr = NULL;

    d1.ptr= &d2;
    printf("d1: num1 = %d ch = %c\n",d1.num1,d1.ch);
    printf("d2: num1 = %d ch = %c\n",d2.num1,d2.ch);
    printf("ptr:num1 = %d ch = %c\n",d1.ptr->num1,d1.ptr->ch);
     return 0;

}