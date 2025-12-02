#include<stdio.h>
struct date
{
    //elements of date struct
    int dd; 
    int mm;
    int yy;
};


int main()
{
    //Concurrency
    struct date d1={11,12,2000}; //struct date var

    printf("\n date=%d-%d-%d", d1.dd,d1.mm,d1.yy);//accessing the memeber / elements  of
    //date struct out side the struct
}

