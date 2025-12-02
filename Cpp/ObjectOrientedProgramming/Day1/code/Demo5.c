#include<stdio.h>
//C structure
struct date
{
    //access specifier  private, public protected is not allowed in struct in C programming
    
    //elements of date struct
    int dd; 
    int mm;
    int yy;

    //Not ok(not allowed C programming )
    // void accept(struct date * ptr)
    // {
    //     printf("\n Enter the date (dd/mm/yy=)");
    //     scanf("%d%d%d",&ptr->dd,&ptr->mm,&ptr->yy); // accessing the date struct element out side the struct
    // }
};

//global function
void accept(struct date * ptr)
{
    printf("\n Enter the date (dd/mm/yy=)");
    scanf("%d%d%d",&ptr->dd,&ptr->mm,&ptr->yy); // accessing the date struct element out side the struct
}

//global function
void display(struct date * ptr)
{
    printf("\n date (%d/%d/%d)",ptr->dd,ptr->mm,ptr->yy);// accessing the date struct element out side the struct
}


int main()
{
    //Concurrency
    struct date d1={11,12,2000}; //struct date var

   // printf("\n date=%d-%d-%d", d1.dd,d1.mm,d1.yy);//accessing the memeber / elements  of
    //date struct out side the struct
    accept(&d1);
    display(&d1);

}

