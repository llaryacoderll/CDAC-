#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int arr1[3][2]={11,22,33,44,55,66};
    int arr2[3][3]={{10},{20,30},{40,50,60}};
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=1;j++)
            printf("%4d",arr1[i][j]);
        printf("\n");
    }
}