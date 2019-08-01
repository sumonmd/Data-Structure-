#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* Head = NULL;
void create(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head==NULL)
    {
        Head = nptr;
    }else{
        node * tptr = Head;
        while(tptr->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next = nptr;

    }
}

void print()
{
    cout<<"Current Linked List : ";
    node* tptr = Head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<"->";
        tptr=tptr->next;
    }
}

int main()
{
    create(5);
    create(6);
    create(7);
    create(8);
    print();
    return 0;
}
