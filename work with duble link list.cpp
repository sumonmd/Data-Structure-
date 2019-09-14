/*
    Md Sumon Ali
    Dept. of Computer Science and Engineering
    Jashore University of Science and Technology
*/
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node* previous;
};
node* Head = NULL;

void insert_last(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;
    nptr->previous = NULL;

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
void insert_first(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;
    nptr->previous=NULL;

    if(Head==NULL){
        Head=nptr;
    }else{
        node* tptr=Head;
        nptr->next = tptr;
        tptr->previous=nptr;
        Head=nptr;

    }

}
void Remove_last()
{

    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }else{
        node* ptr=Head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=NULL;
    }
}
void Remove_first()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }else{
        node* ptr = Head;
        Head = Head->next;
        Head->previous=NULL;
    }
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
    insert_last(3);
    insert_last(4);
    insert_last(5);
    print();
    cout<<"Insert in First"<<endl;
    insert_first(6);
    insert_first(7);
    print();
    cout<<"Remove from Last"<<endl;
    Remove_last();
    print();
    cout<<"Remove from First"<<endl;
    Remove_first();
    print();
    return 0;
}
