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
    if(Head == NULL){
        Head = nptr;
    }else{
        nptr->next = Head;
        Head = nptr;// according to add in first

    }
}
void RemoveFromLast()
{
    if(Head==NULL){
        cout<<"List is empty"<<endl;
    }
    else if(Head->next == NULL){
        Head=NULL;
    }else{
        node* ptr = Head;
      while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=NULL;

    }

}

void display()
{
    node* ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
    insert(5);
    insert(6);
    insert(7);
    RemoveFromLast();
    display();


    return 0;
}
