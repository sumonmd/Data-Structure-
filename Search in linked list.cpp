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
    else
    {
        node* tptr= Head;
        while(tptr->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next=nptr;
    }
}
void Search(int value)
{

    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else
    {
        node* ptr = Head;
        int ck=0;
        while(ptr!=NULL){
            if(ptr->data==value){
                ck=1;
                break;
            }else
            {
                ptr=ptr->next;
            }
        }
        if(ck!=0){
            cout<<"Get the value."<<endl;
        }else{
            cout<<"Not Found"<<endl;
        }

    }
}
void display()
{
    node* ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
    cout<<endl;
}
int main()
{
    insert(5);
    insert(6);
    insert(7);
    display();
    Search(7);

    return 0;
}
