#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* Root =NULL;
void insert(int value)
{
    Node* nptr = new Node;
    nptr->data = value;
    nptr->left = NULL;
    nptr->right = NULL;
    if(Root==NULL){
        Root = nptr;
    }
    else{
        Node* tptr = Root;
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
            else{
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
void print(Node* Root)
{
    if(Root!=NULL){
        print(Root->left);
        cout<<Root->data<<" ";
        print(Root->right);
    }
}
int main()
{
    insert(56);
    insert(66);
    insert(45);
    print(Root);

    return 0;
}
