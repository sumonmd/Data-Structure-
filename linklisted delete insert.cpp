#include<bits/stdc++.h>
using namespace std;

int n=0;
struct node
{
    int data;
    node* next;
};

node* Head =NULL;

void insert(int value)
{
    n++;
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

    if(Head==NULL){
        Head = nptr;
    }
    else{
        node* tptr = Head;
        nptr->next = tptr;
        Head = nptr;
    }
}

void remove_last()
{
    node* ptr = Head;
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=NULL;
    }
}

void remove_first()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        Head=Head->next;
    }
}

void remove_specific(int value)
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node* ptr = Head;
        while(ptr->next->next!=NULL && ptr->next->data!=value){
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
    }
}

void remove_duplicate()
{
    node* ptr = Head;
    while(ptr!=NULL){
        node* tptr = ptr->next;
        while(tptr->next!=NULL){
            if(tptr->next->data==ptr->data){
                tptr->next = tptr->next->next;
            }
        }
        ptr=ptr->next;
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
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    print();
    insert_first(1);
    print();
    remove_last();
    print();
    remove_first();
    print();
    remove_specific(4);
    print();
    insert(2);
    insert(6);
    insert(7);
    //remove_duplicate();
    print();


    return 0;
}
