//Union
#include<stdio.h>
union test 
{
    int num1;
    char ch;
};
int main(){

    union test t1;
    printf("sizeof t1 = %d\n",sizeof(t1));// 4bytes 
    t1.num1 = 25;
    printf("num1 = %d\n",t1.num1);// 25
    t1.ch = 'A';
    printf("ch = %c\n",t1.ch);
    return 0;
    
}