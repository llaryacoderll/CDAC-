#include<stdio.h>
#define SIZE 6

void display(int arr[SIZE]);
void bubble_sort(int arr[SIZE]);
void efficient_bubble_sort(int arr[SIZE]);

int main()
{
   // int arr[SIZE] = {30,20,60,50,10,40};
   int arr[SIZE] = {11,22,33,44,55,66};
    
    printf("\nNormal Bubble Sort :\n");
    printf("\n Before Sort :\n");
    display(arr);
    bubble_sort(arr);
    printf("\n After Sort :\n");
    display(arr);

    printf("\nEfficient Bubble Sort :\n");
    printf("\n Before Sort :\n");
    display(arr);
    efficient_bubble_sort(arr);
    printf("\n After Sort :\n");
    display(arr);

    return 0;
}

void bubble_sort(int arr[SIZE])
{
    int iterations = 0, comparisons = 0;
    for(int it=0;it < SIZE-1; it++) // 2, 
    {
        iterations++;
        for(int pos = 0; pos < SIZE-1-it; pos++) // (pos < 6-1-2)
        {
            comparisons++;
            if(arr[pos] > arr[pos+1]) // arr[1] > arr[2]
            {
                int temp;
                temp = arr[pos];
                arr[pos] = arr[pos+1];
                arr[pos+1] = temp;
            }
        }
    }
    printf("\n iterations = %d comparisons = %d\n",iterations,comparisons);
}

void display(int arr[SIZE])
{
    for(int i =0; i<SIZE; i++)
    {
        printf("%4d",arr[i]);
    }
}



void efficient_bubble_sort(int arr[SIZE])
{
    int iterations = 0, comparisons = 0;
    int flag = 0;
    for(int it=0;it < SIZE-1; it++) // 2, 
    {
        iterations++;
        for(int pos = 0; pos < SIZE-1-it; pos++) // (pos < 6-1-2)
        {
            comparisons++;
            if(arr[pos] > arr[pos+1]) // arr[1] > arr[2]
            {
                int temp;
                temp = arr[pos];
                arr[pos] = arr[pos+1];
                arr[pos+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
    printf("\n iterations = %d comparisons = %d\n",iterations,comparisons);
}
