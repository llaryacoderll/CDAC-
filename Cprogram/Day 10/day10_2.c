//Printing data using array and pointer notation

#include<stdio.h>
int main(){
    int arr[3][3] = {11,22,33,44,55,66,77,88,99};
    printf("arr[1][2] = %d\n",arr[1][2]); //array notation
    printf("*(*(arr+1)+2) = %d\n",*(*(arr+1)+2)); // pointer notation
    
    printf("arr[2][2] = %d\n",arr[2][2]); //array notation
    printf("*(*(arr+2)+2) = %d\n",*(*(arr+2)+2)); // pointer notation

    
    printf("arr[0][2] = %d\n",arr[0][2]); //array notation
    printf("*(*(arr+0)+2) = %d\n",*(*(arr+0)+2)); // pointer notation
    return 0;
}