/*.

1. Write a program to accept marks of five subjects, calculate its total and average.
2. Write a function to accept array elements from the user. Write another function to print array
elements. Re-use these functions in rest of the assignments wherever required.
3. Write a function to reverse the array elements.
4. Write a function to calculate maximum of the array elements. Write another function to
calculate maximum of the array elements.
5. Write a function to calculate maximum and minimum of the array elements.
6. Write a function to remove duplicate elements from the array. After processing the array should
store only the unique elements consecutively. Also function should return the number of unique
elements into the array.
7. Write a function to sort the array using selection or bubble sort.
8. Write a function to search the given number into the array using linear search and return the
index of the element. If element is not found it should return -1.
9. Write a function to search the given number into the array using binary search and return the
index of the element. If element is not found it should return -1.
10. Write a function to search the given number into the array using linear search and return the
address of the element. If element is not found it should return NULL.*/

#include <stdio.h>

#define MAX 100

// Function declarations
void result();
void create(int arr[], int *n);
void reverse(int arr[], int n);

int main()
{
    int n = 0;
    int arr[MAX];
    int choice;

    do{
        printf("1. read mark 5 subject and return total and avrage. \n2. creation of Array \n3. Reverse the array elements.\n4. Maximum of the array elements.\n5. Maximum and minimum of the array elements.\n6. Remove duplicate elements from the array. \n7. Sort the array using selection or bubble sort.\n8. Search element (linaer serach).\n9. Search element(binary search)\n10. Search element (linaer serach) return addres..\n");
        printf("Enter a choice: ");
        scanf("%d",&n);
        printf("------------------------------------------------------------------\n");

        switch (choice)
        {
            case 1:
                result();
                break;

            case 2:
                create(arr, &n);
                break;

            case 3:
                if (n == 0)
                    printf("Array not created yet! Please create first.\n");
                else
                    reverse(arr, n);
                break;
        // case 4:
        //         max();
        //         break;
        // case 5:
        //         max();
        //         min();
        //         break;
        // case 6:
        //         remove_dupilate();
        //         break;
        // case 7:
        //         sort();
        //         break;
        // case 8:
        //         search_linaer();
        //         break;
        // case 9:
        //         search_binary();
        //         break;
        // case 10:
        //         search_linaer_adress();;
        //         break;
        
        // default:
        //     break;
        }
        printf("------------------------------------------------------------------\n");
    }while(n!=0);
}
void result()
{
    int arr[5], sum = 0;
    printf("Enter marks of 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Total marks: %d\n", sum);
    printf("Average: %.2f\n", sum / 5.0);
}

//--------------------------------------------------------
// 2️⃣ Function to create array
void create(int arr[], int *n)
{
    printf("How many elements do you want to insert? ");
    scanf("%d", n);

    printf("Enter %d elements: ", *n);
    for (int i = 0; i < *n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are: ");
    for (int i = 0; i < *n; i++)
        printf("%4d", arr[i]);
    printf("\n");
}

//--------------------------------------------------------
// 3️⃣ Function to reverse array
void reverse(int arr[], int n)
{
    int left = 0, right = n - 1, temp;

    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
        printf("%4d", arr[i]);
    printf("\n");
}