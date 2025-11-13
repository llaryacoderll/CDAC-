#include <stdio.h>
#define SIZE 9
int linear_search(int arr[],int);
int main()
{
    int key,n;
    int arr[SIZE]={55,22,11,33,88,44,77,99,66};
    printf("Enter a key value to search: ");
    scanf("%d",&key);
    n = linear_search(arr,key);
    if(n==-1)
        printf("Not found..");
    else
        printf("Found at postion at index at %d",n);

    
}
int linear_search(int arr[],int key){
    for(int i=0;i<SIZE;i++)
    {
        if(key==arr[i])
            return i;
    }
    return -1;
}