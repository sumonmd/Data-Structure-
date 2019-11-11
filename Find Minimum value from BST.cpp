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
        while(1){
            if(tptr->data > value){
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

void print(node* root)
{
    if(root!=NULL){
        print(root->left);
        cout<<root->data<<" ";
        print(root->right);
    }
}

void Minimum(node* root)
{
    if(root->left==NULL){
        cout<<root->data<<endl;
    }
    else{
        Minimum(root->left);
    }

}

int main()
{
    int a;
    for(int i=0;i<5;i++){
        cin>>a;
        insert(a);
    }

    print(Root);
    cout<<endl;
    Minimum(Root);

    return 0;
}
