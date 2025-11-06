//Const keyword
#include<stdio.h>
int main(){
    const float PI = 3.14;
    const float * const fptr = &PI;
    printf("PI = %.2f\n",PI);// 3.14
   // PI = 2.14;
   
   float fvar = 10.2;
   //fptr = &fvar;
     printf("*fptr = %.2f\n",*fptr);
     return 0;

}