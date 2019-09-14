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

    if(Root==NULL){
        Root = nptr;
    }
    else{
        node* tptr = Root;
        while(true){
            if(tptr->data>value){
                if(tptr->left==NULL){
                    tptr->left = nptr;
                    break;
                }else{
                    tptr = tptr->left;
                }
            }
            if(tptr->data<value){
                if(tptr->right==NULL){
                    tptr->right = nptr;
                    break;
                }else{
                    tptr = tptr->right;
                }
            }
        }
    }
}

node* nodedelete(node* root ,int value)
{
    if(root==NULL)
        return root;
    if(root->data > value){
        root->left = nodedelete(root->left,value);
    }
    else if(root->data < value){
        root->right = nodedelete(root->right,value);
    }
    else{
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->left==NULL || root->right==NULL)
        {
            node* tmp;
            if(root->left ==NULL){
                tmp = root->right;
            }else{
                tmp = root->left;
            }
            free(root);
            return tmp;
        }

    }

}
node* minimum(node* root)
{
    if(root==NULL)
        return NULL;
    else if(root->left!=NULL)
        return minimum(root->left);
    return root;
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
    insert(20);
    insert(10);
    insert(30);
    insert(5);
    insert(11);
    insert(40);
    insert(50);
    print(Root);
    node* head = minimum(Root);
    cout<<endl;
    cout<<head->data<<endl;
    return 0;
}
