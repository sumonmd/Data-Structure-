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

    if(Head == NULL)
    {
        Head = nptr;
    }else{
        node * tptr = Head;
        while(tptr->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next=nptr;
    }

}
void Atfirst(int value)
{
    node* ptr = new node;
    ptr->data = value;
    ptr->next = NULL;
    if(Head == NULL){
        Head = ptr;
    }else{
        ptr->next=Head;
        Head=ptr;
    }
}
void print()
{
    cout<<"Current Linked List : ";
    node* tptr = Head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<"<-";
        tptr=tptr->next;
    }
}
int main()
{
    Atfirst(5);
    Atfirst(6);
    Atfirst(7);
    Atfirst(8);
    print();

    return 0;
}
