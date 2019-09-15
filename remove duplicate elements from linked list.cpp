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
    }
    else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next = nptr;
    }
}

void remove_duplicate()
{
    node *ptr1,*ptr2;
    ptr1 = Head;
    while(ptr1!=NULL && ptr1->next!=NULL){
        ptr2 = ptr1;
        while(ptr2->next!=NULL){
            if(ptr1->data == ptr2->next->data){
                ptr2->next = ptr2->next->next;
            }
            else{
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
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
    int a;
    for(int i=0;i<5;i++){
        cin>>a;
        insert(a);
    }
    print();
    remove_duplicate();
    print();

    return 0;
}
