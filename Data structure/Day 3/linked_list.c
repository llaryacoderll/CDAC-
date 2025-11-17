#include <stdio.h>
#include <stdlib.h>
struct node* create_node();
void add_node(int value);
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

int main()
{

    return 0;
}

struct node* create_node()
{
    struct node *ptr = (struct node*) malloc(sizeof(int));
    ptr->data = 0;
    ptr->next = NULL;
    return ptr;
}

void add_node(int value)
{
    struct node *ptr = create_node();
    ptr->data = value;
    if(head==NULL)
        head == ptr;
    else
    {
        ptr->next = head;
        head = ptr;
    }

}
