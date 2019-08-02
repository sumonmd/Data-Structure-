#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* previous;
    node* next;
};

node* Head = NULL;

void insert(int value)
{
    node* nptr = new node;
    node* ptr;
    nptr->data=value;
    nptr->previous=NULL;
    nptr->next = NULL;
    if(Head==NULL){
        Head=nptr;
    }else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next=nptr;
        nptr->previous=tptr;
    }
}

void display()
{
    node* ptr = Head;
    if(Head==NULL){
        cout<<" List is empty "<<endl;
    }else{
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
}

int main()
{
    insert(5);
    insert(6);
    insert(7);
    display();


    return 0;
}
