#include<stdio.h>

struct node
{
    int data;
    node* next;
};

void add(int value)
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
node* Head = NULL;

int main()
{
    add(5);
    add(6);
    add(7);
    print();


    return 0;
}
