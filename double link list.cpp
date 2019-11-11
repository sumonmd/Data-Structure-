#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
};
node* Head = NULL;
void create(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->prev = NULL;
    nptr->next = NULL;

    if(Head==NULL){
        Head = nptr;
    }
    else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next = nptr;
        nptr->prev = tptr;
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

void print()
{
    node* ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
    create(5);
    create(6);
    create(7);
    print();
    remove();
    print();


    return 0;
}
