//Arrays in function
#include<stdio.h>
void accept_data(int arr[5]);
void print_data(int arr[5]);
int  main()
{
    int arr[5];
    accept_data(arr);
    print_data(arr);
    return 0;
}

void accept_data(int arr[5]){
    printf("enter the array elements: \n");
    for(int i =0;i<5;i++){
        scanf("%d",&arr[i]);
    }
}
void print_data(int arr[5]){

    printf("array elements are: \n");
    for(int i=0;i<5;i++){
        printf("%4d",arr[i]);
    }
}