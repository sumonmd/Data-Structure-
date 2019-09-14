/*
    Md Sumon Ali
    Dept. of Computer Science and Technology
    Jashore University of Science and Technology
*/
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
    }else
    {
        node* tptr = Root;
        while(true){
            if(tptr->data > value){
                if(tptr->left==NULL){
                    tptr->left = nptr;
                    break;
                }else{
                    tptr=tptr->left;
                }
            }
            else{
                if(tptr->right==NULL){
                    tptr->right=nptr;
                    break;
                }else{
                    tptr=tptr->right;
                }
            }
        }
    }
}
void print_inorder(node* node)
{
    if(node!=NULL){
        print_inorder(node->left);
        cout<<node->data<<" ";
        print_inorder(node->right);
    }


}
void print_preorder(node* node)
{
    if(node!=NULL){
        cout<<node->data<<" ";
        print_inorder(node->left);
        print_inorder(node->right);
    }

}

int main()
{
    insert(4);
    insert(7);
    insert(1);
    insert(2);
    insert(0);
    insert(9);
    insert(8);

    cout<<"In order : ";
    print_inorder(Root);
    cout<<endl<<"Pre order : ";
    print_preorder(Root);

    return 0;
}
