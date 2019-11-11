#include<stdio.h>

struct node
{
    int data;
    node* next;
};
node* Head=NULL;
void first_add(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;
    nptr->next = Head;
    Head = nptr;
}
void add(int value){
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

void remove()
{
    node* ptr = Head;
    while(ptr->next->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = NULL;
}
void first_remove()
{
    Head = Head->next;
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
    add(5);
    add(6);
    add(7);
    print();
    first_remove();
    print();
    first_add(8);
    print();


    return 0;
}
