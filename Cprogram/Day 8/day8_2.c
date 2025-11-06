//Array with pointer notation
#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    //printf("arr = %d\n",arr);
    printf("arr[0] = %d\n",arr[0]);
    //printf("arr+1 = %d\n",arr+1);
    printf("*(arr+1) = %d\n",*(arr+1));

    printf("arr[2] = %d\n",arr[2]);
    printf("*(arr+2) = %d\n",*(arr+2));

}