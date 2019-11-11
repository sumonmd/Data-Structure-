#include<stdio.h>

struct node
{
    int data;
    struct node* next;
}Struct;

void add(node *Head,int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head==NULL){
        Head=nptr;
    }
    else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next = nptr;
    }
}

void print()
{
    node* ptr = Head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}


int main()
{
    Struct Head = NULL;
    add(&Head,5);
    add(&Head,6);
    add(&Head,7);
    print();


    return 0;
}

