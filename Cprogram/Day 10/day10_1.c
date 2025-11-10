//Passing 2-D arrays to function
#include <stdio.h>
void accept_data(int arr[3][3]);
void print_data(int arr[3][3]);
int main()
{
    int arr[3][3];
    accept_data(arr);
    print_data(arr);
    printf("Size of arr in main is %d\n",sizeof(arr));
    
}
void accept_data(int arr[3][3])
{
    printf("Enter array elemnts: \n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        scanf("%d",&arr[i][j]);
    printf("Size of arr in function is %d\n",sizeof(arr));
    
}
void print_data(int arr[3][3])
{
    printf("Array Elemnets: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%4d",arr[i][j]);
        printf("\n");
    }

    printf("Size of arr in function is %d\n",sizeof(arr));
    
}