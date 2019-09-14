#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* Root = NULL;

void insert(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->left = NULL;
    nptr->right = NULL;

    if(Root == NULL){
        Root = nptr;
    }
    else{
        node* tptr = Root;
        while(true){
            if(tptr->data >value){
                if(tptr->left==NULL){

                    tptr->left = nptr;
                    break;
                }
                else{
                    tptr = tptr->left;
                }
            }
            if(tptr->data<value){
                if(tptr->right==NULL){

                    tptr->right = nptr;
                    break;
                }
                else{
                    tptr = tptr->right;
                }
            }
        }
    }
}

void print(node* ptr )
{

    if(ptr!=NULL){
        print(ptr->left);
        cout<<ptr->data<<" ";
        print(ptr->right);
    }
}
int main()
{
    insert(40);
    insert(5);
    insert(66);
    insert(4);
    insert(1);
    insert(100);
    print(Root);

    return 0;
}
