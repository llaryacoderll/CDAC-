#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


typedef struct Queue{
    int arr[SIZE];
    int front;
    int rear;
}Queue;

void init_Queue(Queue *pq);
void enqueue(int value,Queue *pq);
void dequeue(Queue *pq);
int peek(Queue *pq);
int queue_full(Queue *pq);
int queue_empty(Queue *pq);


int main()
{
    Queue Q;
    init_Queue(&Q);
    int choice;
    do{
    printf("\n0.Exit\n1.Enqueue\n2.Dequeue\n3.peek\nEnter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 0:exit(0);
    case 1://enqueue
            if(queue_full(&Q))
                printf("Queue is full..!!\n");
            else{
                int val;
                printf("Enter the val: ");
                scanf("%d",&val);
                enqueue(val,&Q);
                printf("Value Entered in Queue : %d\n",val);
            }
            break;
    case 2 : //dequeue
            if(queue_empty(&Q))
                printf("Queue is Empty..!!\n");
            else{
                int val = peek(&Q);
                dequeue(&Q);
                printf("Value dequeue from the queue : %d\n",val);
            }
            break;
    case 3: // peek
            if(queue_empty(&Q))
                printf("Queue is Empty..!\n");
            else{
                int val = peek(&Q);
                printf("In Front of Queue :%d\n",val);
            }
            break;
    
    default: printf("Invaild Input..!1\n");
        break;
    }
    }while(choice!=0);
    return 0;
}

void init_Queue(Queue *pq)
{
    pq->front=-1;
    pq->rear=-1;
}

void enqueue(int value,Queue *pq)
{
    pq->rear++;
    pq->arr[pq->rear] = value;
    if(pq->front==-1)
        pq->front++;
}

void dequeue(Queue *pq)
{
    pq->front++;
}

int peek(Queue *pq)
{
    return pq->arr[pq->front];
}

int queue_full(Queue *pq)
{
    if(pq->rear == SIZE-1)
        return 1;
    else    
        return 0;
}

int queue_empty(Queue *pq)
{
    if(pq->rear ==-1 || pq->rear < pq->front)
        return 1;
    else
        return 0;
}