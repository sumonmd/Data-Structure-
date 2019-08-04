#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};
node* Root = NULL;
void Add(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->left = NULL;
    nptr->right = NULL;

    if(Root==NULL){
        Root = nptr;
    }
    else
    {
        node* tptr = Root;
        while(true){
            if(tptr->data > value){
                if(tptr->left==NULL){
                    tptr->left = nptr;
                    break;
                }
                else{
                    tptr=tptr->left;
                }
            }
            if(tptr->data < value){
                if(tptr->right==NULL){
                    tptr->right = nptr;
                    break;
                }
                else{
                    tptr=tptr->right;
                }
            }
        }
    }

}
void print(node* node)
{
    if(node!=NULL){
        print(node->left);
        cout<<node->data<<" ";
        print(node->right);
    }
}

int main()
{
    Add(50);
    Add(15);
    Add(75);
    Add(37);
    Add(3);
    Add(35);
    Add(99);
    Add(60);
    print(Root);
    return 0;
}
