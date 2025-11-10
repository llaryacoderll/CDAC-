//Pointer notation in 2-D Array
#include <stdio.h>
int main()
{
    int arr[3][3]={11,22,33,44,55,66,77,88,99};
    printf("arr[2][3] = %d\n",arr[2][3]);
    printf("*(*(arr+2)+3) = %d\n",arr[2][3]);
    
    printf("arr[1][1] = %d\n",arr[1][1]);
    printf("*(*(arr+1)+1) = %d\n",*(*(arr+1)+1));
    
        printf("arr[2][0] = %d\n",arr[2][0]);
    printf("*(*(arr+2)) = %d\n",*(*(arr+2)));
    

    printf("*(*(arr+2)) = %d\n",*(*(arr+2))+2);

}