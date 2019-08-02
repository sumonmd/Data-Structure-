#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* Head = NULL;
void insert(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;
    if(Head==NULL)
        Head = nptr;
    else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next = nptr;
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
void RemoveNode(int value)
{
    if(Head==NULL){
        cout<<"List is empty"<<endl;
    }
    else if(Head->data==value){
        Head = Head->next;
    }else{
        node* ptr = Head;
        while(ptr->next!=NULL && ptr->next->data!=value){
            ptr = ptr->next;
        }
        if(ptr->next==NULL){
            cout<<"NOT found in List"<<endl;
        }else{
            ptr->next=ptr->next->next;
        }

    }

}
int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    RemoveNode(7);
    display();

    return 0;
}
