#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* previous;
    node* next;
};

node* Head=NULL;

void insert(int value)
{
    node* nptr=new node;
    nptr->data = value;
    nptr->previous = NULL;
    nptr->next = NULL;

    if(Head==NULL){
        Head=nptr;
    }else{
        node* tptr = Head;
        nptr->next=tptr;
        tptr->previous=nptr;
        tptr=nptr;
        Head=tptr;
    }

}
void display()
{
    if(Head==NULL){
        cout<<"Empty list"<<endl;
    }else{
        node* ptr;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
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
