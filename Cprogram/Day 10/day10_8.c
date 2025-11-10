#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = calloc(sizeof(int),5);
    if(ptr==NULL)
        printf("Memory is not allocated..");
    else{
        for(int i=0;i<5;i++){
            ptr[i]=i+10;
        }
    }
    printf("array elements are:\n");
    for(int i=0;i<5;i++)
        printf("%d ",ptr[i]);

    
    printf("\nrealloc\n");
    ptr = realloc(ptr,sizeof(int)*7);
    ptr[5]=60;
    ptr[6]=70;
    printf(" New array elements are:\n");
    for(int i=0;i<7;i++)
        printf("%d ",ptr[i]);

    free(ptr);
    ptr=NULL;
}