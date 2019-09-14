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
        Head = nptr;
    }
    else
    {
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next = nptr;
    }
}
void Remove_Duplicate()
{
    node* ptr = Head;
    while(ptr!=NULL && ptr->next!=NULL){
        node* tptr = ptr->next;
        while(tptr->next->next!=NULL){
            if(tptr->data== ptr->data){
                node* dup = tptr->next;
                tptr->next = tptr->next->next;
                delete(dup);
            }
            else{
                tptr = tptr->next;
            }
        }
        ptr = ptr->next;
    }
}

void print()
{
    node* ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(5);
    insert(5);
    print();
    Remove_Duplicate();
    print();
    return 0;
}
