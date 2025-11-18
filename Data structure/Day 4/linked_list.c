#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node* create_node();
void add_first(int value);
void display();
void add_last(int value);
void add_at_pos(int value,int pos);
int count();
void delete_first();
void delete_last();
void delete_at_pos(int pos);


int main()
{
    add_first(10);
    add_first(20);
    add_first(30);
    add_first(40);
    printf("\nAdd first..");
    display();
    printf("\nAdd last..");
    add_last(50);
    display();
    printf("\nAdd at postion..");
    add_at_pos(80,2);
    display();
    printf("\ndelete fisrt..");
    delete_first();
    display();
    printf("\ndelete last..");
    delete_last();
    display();
    printf("\ndelete at postion..");
    delete_at_pos(2);
    display();
    return 0;
}

struct node* create_node()
{
    struct node *ptr =(struct node*) malloc(sizeof(struct node));
    ptr->data=0;
    ptr->next=NULL;
    return ptr;
}

void add_first(int value)
{
    struct node *ptr = create_node();
    ptr->data=value;
    if(head==NULL)
        head=ptr;
    else{
        ptr->next=head;
        head=ptr;
    }     
}

void display()
{
    if(head==NULL)
        printf("list is empty..");
    else{
        struct node *trav = head;
        printf("\nHead");
        while(trav!=NULL)
        {
            printf("->%d",trav->data);
            trav=trav->next;
        }
    }
}

void add_last(int value)
{
    if(head==NULL)
        add_first(value);
    else{
        struct node *trav = head;
        struct node *ptr = create_node();
        ptr->data=value;
        while(trav->next!=NULL)
        {
            trav=trav->next;
        }
        trav->next=ptr;
    }
}

void add_at_pos(int value,int pos)
{
    if(head==NULL)
    {
        if(pos==1)
            add_first(value);
        else
            printf("\nInvaild Postion..");
    }
    else if(pos==1)
        add_first(value);
    else if(pos==count()+1){
        add_last(value);
    }
    else if(pos<1 || pos>count()+1){
        printf("\nInvaild Postion..");
    }
    else{
        struct node *ptr = create_node();
        ptr->data=value;
        struct node *trav = head;
        for(int i=1;i<pos-1;i++)
        {
            trav=trav->next;
        }
        ptr->next=trav->next;
        trav->next=ptr;
    }
        
}

int count()
{
    int count=0;
    struct node *trav=head;
    while(trav!=NULL)
    {
        count++;
        trav=trav->next;
    }
    return count;
}

void delete_first()
{
    if(head==NULL)
        printf("\nList is empty..");
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        struct node *temp = head;
        temp=head;
        head=head->next;
        free(temp);
        temp=NULL;
    }
}

void delete_last()
{
    if(head==NULL)
        printf("List is Empty..");
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node *trav=head;

        while(trav->next!=NULL)
        {
            trav=trav->next;
        }
        free(trav->next);
        trav->next=NULL;
    }
}
void delete_at_pos(int pos)
{
    if(head==NULL)
    {
        printf("\nList is Empty..");
    }
    else if(pos==1){
        delete_first();
    }
    else if(pos==count()){
        delete_last();
    }
    else{
        struct node *trav=head;
        struct node *temp=head;
        for(int i=1;i<pos-1;i++)
            trav=trav->next;

        temp =trav->next;
        trav->next=temp->next;
        free(temp);
        temp=NULL;
    }

}