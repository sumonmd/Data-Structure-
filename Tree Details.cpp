#include<bits/stdc++.h>
using namespace std;

struct node{
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
                }
                else{
                    tptr = tptr->left;
                }
            }
            if(tptr->data<value){
                if(tptr->right == NULL){
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
string search(node* root,int value)
{
    if(root==NULL){
        cout<<"Empty Tree"<<endl;
    }
    else{
        node* tptr = root;
        string result = "Not Found";
        while(tptr!=NULL){
            if(tptr->data>value){
                tptr=tptr->left;
            }
            else if(tptr->data <value){
                tptr = tptr->right;
            }
            else if(tptr->data ==value){
                result = "Founded";
                break;
            }
        }
        return result;
    }

}

void print(node* root)
{
    if(root!=NULL){
        print(root->left);
        print(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    insert(45);
    insert(4);
    insert(10);
    insert(55);
    insert(60);
    print(Root);
    cout<<endl;
    cout<<search(Root,11)<<endl;;
    return 0;
}
