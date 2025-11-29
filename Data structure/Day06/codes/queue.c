#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct queue
{
    int arr[SIZE];
    int rear;
    int front;
}queue;

void init_queue(queue *pq);
void enqueue(int data, queue *pq);
void dequeue(queue *pq);
int peek(queue *pq);
int queue_full(queue *pq);
int queue_empty(queue *pq);

int main()
{
    queue Q;
    init_queue(&Q);
   
   int choice;
do{
   printf("0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n");
   printf("Enter your choice :");
   scanf("%d",&choice);

   switch(choice)
   {
    case 0:
            exit(0);
    case 1: // enqueue
            if(queue_full(&Q)) // if(0)
            {
                printf("Q is Full !\n");
            }
            else
            {
                int data;
                printf("enter the data :");
                scanf("%d",&data);
                enqueue(data,&Q);
                printf("Data entered in the Q = %d\n",data);
            }
            break;
    case 2: // dequeue
            if(queue_empty(&Q))
            {
                printf("Q is empty !\n");
            }
            else
            {
                int value = peek(&Q);
                dequeue(&Q);
                printf("The value deleted = %d\n",value);
            }
            break;
    case 3: // peek
            if(queue_empty(&Q))
            {
                printf("Q is Empty ! nothing to Peek !\n");
            }
            else
            {
                int val = peek(&Q);
                printf("Frontmost element = %d\n",val);
            }
            break;
    default :
            printf("Enter the valid choice !\n");
   }
}while(choice != 0);
    return 0;
}

void init_queue(queue *pq)
{
    pq->front = -1;
    pq->rear = -1;
}

void enqueue(int data, queue *pq)
{
    // 1. incrment the rear
    pq->rear++;
    // 2. insert the data at the rear position
    pq->arr[pq->rear] = data;
    // 3. if front is at -1 bring front to 0
    if(pq->front == -1)
        pq->front = 0;
}

void dequeue(queue *pq)
{
    // optional
    pq->arr[pq->front] = 0;
    // increment front
    pq->front++;
}


int peek(queue *pq)
{
    return pq->arr[pq->front];
}


int queue_full(queue *pq)
{
    if(pq->rear == SIZE-1)
        return 1;
    else
        return 0;
}

int queue_empty(queue *pq)
{
    if(pq->rear == -1 || pq->front > pq->rear)
        return 1;
    else
        return 0;
}