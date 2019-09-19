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
            node* ptr = Root;
        while(true){
            if(ptr->data>value){
                if(ptr->left==NULL){
                    ptr->left = nptr;
                    break;
                }else{
                    ptr = ptr->left;
                }
            }
            if(ptr->data<value){
                if(ptr->right==NULL){
                    ptr->right = nptr;
                    break;
                }else{
                    ptr = ptr->right;
                }
            }
        }
    }
}

void print(node* root)
{
    if(root!=NULL){
        print(root->left);
        cout<<root->data<<" ";
        print(root->right);
    }
}

int main()
{
    int a;
    for(int i=0;i<=5;i++){
        cin>>a;
        insert(a);
    }
    print(Root);

    return 0;
}
