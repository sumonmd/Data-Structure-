#include<bits/stdc++.h>
using namespace std;

struct node
{
    char str;
    node* next;
};

node* Head = NULL;

void insert(char ch)
{
    node* nptr = new node;
    nptr->str = ch;
    nptr->next = NULL;

    if(Head==NULL){
        Head = nptr;
    }
    else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr= tptr->next;
        }
        tptr->next = nptr;
    }
}
void remove_element(node* head,int n)
{
    int cnt = 0;
    while(head->next!=NULL && cnt!=n-1){
        head = head->next;
        cnt++;
    }
    head->next = head->next->next;

}

void print()
{

    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node* tptr = Head;
        while(tptr!=NULL){
            cout<<tptr->str;
            tptr = tptr->next;
        }
        cout<<endl;
    }
}

int main()
{
    char a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        insert(a);
    }
    print();
    remove_element(Head,n/2);
    print();


    return 0;
}
