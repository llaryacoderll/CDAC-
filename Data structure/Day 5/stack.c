#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

typedef struct Stack{
    int arr[SIZE];
    int top;
}Stack;

void init_stack(Stack *ps);
void push(int value,Stack *ps);
void pop(Stack *ps);
int peek(Stack *ps);
int Stack_empty(Stack *ps);
int Stack_full(Stack *ps);

int main()
{
    Stack S;
    init_stack(&S);
    int choice;

    do{
    printf("1.Push\n2.Pop\n3.Peek\n0.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: //Push
            if(Stack_full(&S))
                printf("Stack is full..!!\n");
            else{
                int value;
                printf("Enter a value to be pushed: ");
                scanf("%d",&value);
                push(value,&S);
                printf("Value pushed : %d\n",value);
            }
            break;
    case 2: //Pop
            if(Stack_empty(&S))
                printf("Stack is Empty..\n");
            else{
                int val = peek(&S);
                pop(&S);
                printf("Value Popped : %d\n",val);
            }
            break;
    case 3: //peek
            if(Stack_empty(&S))
                printf("Stack is Empty.. peek not possible..\n");
            else{
                int val = peek(&S);
                printf("Toppmost value : %d\n",val);
            }
            break;
    case 0 :exit(0);

    
    default:
            printf("Invaild Choice..\n");
        break;
    }
    }while(choice!=0);

    return 0;
}

void init_stack(Stack *ps)
{
    ps->top=-1;
}

void push(int value,Stack *ps)
{
    ps->top++;
    ps->arr[ps->top]=value;
}

void pop(Stack *ps)
{
    ps->top--;
}

 int peek(Stack *ps)
 {
    return ps->arr[ps->top];
 }

int Stack_full(Stack *ps)
{
    return (ps->top == SIZE - 1);
}

int Stack_empty(Stack *ps)
{
    return (ps->top == -1);
}
