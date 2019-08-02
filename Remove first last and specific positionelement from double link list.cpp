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
    nptr->data = value;
    nptr->previous = NULL;
    nptr->next = NULL;

    if(Head==NULL)
    {
        Head=nptr;
    }else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next = nptr;
        nptr->previous = tptr;
    }
}

void RemoveFirst()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }else{
        node* tptr = Head;
        Head = tptr->next;
        tptr->previous=NULL;
        tptr=Head;
    }
}
void RemoveLast()
{
    if(Head==NULL)
    {
        cout<<"Empty Element"<<endl;
    }else if(Head->next==NULL){
        Head=NULL;
    }else{
        node* ptr = Head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=NULL;
    }
}

void RemoveElement(int value)
{

    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else if(Head->data == value){
        Head=Head->next;
    }
    else{
        node* tptr = Head;
        cout<<"count: ";
        while(tptr->next!=NULL && tptr->next->data!=value){
            cout<<tptr->next->data<<" ";
            tptr = tptr->next;
        }
        cout<<endl;
        if(tptr->next==NULL){
            cout<<"Element NOT Found"<<endl;

        }else{
            cout<<"Element "<<tptr->next->data<<endl;
            //tptr = tptr->next->next->previous;
            tptr->next = tptr->next->next;
            tptr->next->previous=tptr;

            //tptr->next->next->previous = tptr;
        }

    }
}

void display()
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
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    insert(10);
    insert(11);
    cout<<"After insert element "<<endl;
    display();

    RemoveFirst();
    cout<<"After Remove from first element "<<endl;
    display();
    RemoveLast();
    cout<<"Remove element from Last"<<endl;
    display();
    //RemoveElement(7);
    RemoveElement(91);
    display();
    return 0;
}
