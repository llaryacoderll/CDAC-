#include<stdio.h>
//C++ structure
//Note:-    by default members(data emember and membre function) of structure are public
// accessible out side the struct in C++.
struct date
{
    private: 
        //elements or data members of date struct
        int dd; 
        int mm;
        int yy;
    public:
        //member function
        void accept()
        {
            printf("\n Enter the date (dd/mm/yy=)");
            scanf("%d%d%d",&dd,&mm,&yy); // accessing the date struct element out side the struct
        }
        //member function
        void display()
        {
            printf("\n date (%d/%d/%d)",dd,mm,yy);// accessing the date struct element out side the struct
        }
};

// //global function
// void accept(struct date * ptr)
// {
//     printf("\n Enter the date (dd/mm/yy=)");
//     scanf("%d%d%d",&ptr->dd,&ptr->mm,&ptr->yy); // accessing the date struct element out side the struct
// }

// //global function
// void display(struct date * ptr)
// {
//     printf("\n date (%d/%d/%d)",ptr->dd,ptr->mm,ptr->yy);// accessing the date struct element out side the struct
// }


int main()
{
    //Concurrency
    struct date d1={11,12,2000}; //struct date var

   // printf("\n date=%d-%d-%d", d1.dd,d1.mm,d1.yy);//accessing the memeber / elements  of
    //date struct out side the struct
    // accept(&d1);
    // display(&d1);
    //Q. how to give a call to the member function?
    // Ans:- using variable and . oeprator nameof function()
    d1.accept(); // calling the member function of date struct
    d1.display();// calling the member function of date struct

   // printf("\n date=%d-%d-%d", d1.dd,d1.mm,d1.yy);//accessing the memeber / elements  of
 
    
}

