#include <stdio.h>
#define SIZE 9
int main(){
    int key,n;
    int arr[9]={11,22,33,44,55,66,77,88,99};
    printf("Enter a key to serach : ");
    scanf("%d",&key);

    n = binary_serach(arr,key);
    if(n==-1)
        printf("Not found..");
    else    
        printf("Found at postion at index %d",n);

}
int binary_serach(int arr[],int key)
{
    int left=0,right=SIZE-1,mid;
    do{
        mid=(left+right)/2;
        if(arr[mid]==key)
            return mid;
        else if(key>arr[mid])
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }while(left<=right);
    return -1;
}