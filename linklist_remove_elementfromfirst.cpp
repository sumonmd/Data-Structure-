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
    node* nptr  = new node;
    nptr->data = value;
    nptr->next = NULL;
    if(Head == NULL){
        Head = nptr;
    }else{
        node* tptr = Head;
        while(tptr->next!= NULL){
            tptr=tptr->next;
        }
        tptr->next=nptr;
    }
}
void Removefirst()
{
    if(Head == NULL){
        cout<<"Element is empty "<<endl;
    }else{
        Head = Head->next;
    }
}
void display()
{
    node* ptr = Head;
    while(ptr!=0){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    insert(5);
    insert(6);
    insert(7);
    display();
    cout<<endl;
    Removefirst();
    display();
    return 0;
}
