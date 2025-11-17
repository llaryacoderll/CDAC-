#include <stdio.h>
#define SIZE 6
void inseration_sort(int arr[]);
void display(int arr[]);
int main()
{

    int arr[SIZE]={55,22,33,11,44,66};
    printf("Before sorting :");
    display(arr);
    inseration_sort(arr);
    printf("\nAfter sorting :");
    display(arr);
}
void inseration_sort(int arr[]){
    int i,j,temp;
    for(i=1;i<SIZE;i++){
        temp=arr[i];
        for(j=i-1 ; j>=0 && temp<arr[j] ; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
}
void display(int arr[])
{
    for(int i=0;i<SIZE;i++)
        printf("%4d",arr[i]);
}