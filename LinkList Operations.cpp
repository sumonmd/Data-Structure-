#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* Head = NULL;

void insert(int value)
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
void insert_first(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head == NULL){
        Head = nptr;
    }else{
        node* tptr = Head;
        nptr->next = tptr;
        Head = nptr;
    }
}
void remove()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node* tptr = Head;
        while(tptr->next->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next=NULL;
    }
}
void remove_first()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        Head = Head->next;
    }
}
void print()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node* ptr = Head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
    cout<<endl;
}

int main()
{
    insert(5);
    insert(50);
    insert(500);
    print();
    insert_first(10);
    print();
    remove();
    print();
    insert_first(15);
    print();
    remove_first();
    print();
    return 0;
}
