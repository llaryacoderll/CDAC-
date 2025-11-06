#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 elements of arr: ");
    for(int i=0; i<=4; i++)
        scanf("%d",&arr+i);  // Pointer notation

    printf("\nArray : ");
    for(int i=0; i<=4; i++)
        printf("%4d", *(arr+i));  // Pointer notation
    printf("\n");
    
    return 0;
}