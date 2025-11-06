//Const keyword
#include<stdio.h>
int main(){
    const float PI = 3.14;
    // float const PI = 3.14; // value is constant
    printf("PI = %.2f\n",PI);// 3.14
   // PI = 2.14;
   float *fptr = &PI;
   *fptr = 2.14;
     printf("PI = %.2f\n",PI);
     return 0;

}