#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* Head=NULL;
void insertLast(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head==NULL){
        Head = nptr;
    }else{
        node* tptr= Head;
        while(tptr->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next = nptr;

    }

}
void insertFirst(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head==NULL){
        Head = nptr;
    }
    else
    {
        nptr->next=Head;
        Head=nptr;
    }
}

void RemoveLast()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else if(Head->next==NULL)
    {
        Head = NULL;
    }
    else
    {
        node* tptr = Head;
        while(tptr->next->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next = NULL;
    }
}

void RemoveFirst()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else if(Head->next==NULL)
    {
        Head=NULL;
    }
    else
    {
       node* tptr = Head;
       Head = tptr->next;
    }
}

void RemoveParticular(int value)
{
    if(Head==NULL)
    {
        cout<<"Empty List"<<endl;
    }
    else if(Head->data==value)
    {
        Head = Head->next;
    }
    else{
        node* ptr = Head;
        while(ptr->next->data!=value && ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        if(ptr->next==NULL){
            cout<<"Not found"<<endl;
        }
        else{
            ptr->next = ptr->next->next;
        }
    }
}

void display()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else
    {
        node* ptr = Head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
}

int main()
{
    insertLast(5);
    insertLast(6);
    insertLast(10);
    insertLast(12);
    display();
    insertFirst(7);
    insertFirst(8);
    display();
    RemoveLast();
    RemoveFirst();
    display();
    RemoveParticular(6);
    RemoveParticular(5);
    RemoveParticular(10);
    display();
    return 0;
}
