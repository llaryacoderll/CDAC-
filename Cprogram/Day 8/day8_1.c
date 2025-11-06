#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int arr2[7]={10,20,30};
    printf("Size of arr = %d \n",sizeof(arr));
    printf("Size of arr = %d \n",sizeof(arr2));
    printf("Size of arr = %d \n",sizeof(arr[0]));
    printf("Size of arr = %d \n",sizeof(arr[1]));
    printf("Size of arr = %d \n",sizeof(arr[2]));
}