// bitfields
#include<stdio.h>
#pragma pack(1)
struct person
{
    char name[20];
    unsigned int age:6;
    unsigned int gender:1;
    //char gender;

};
int main(){
    struct person p1;
    printf("size of struct person = %d\n",sizeof(p1));// 28

    return 0;
}
