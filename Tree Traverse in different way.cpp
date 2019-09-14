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
    }else{
        node* tptr = Root;
        while(true){
            if(tptr->data>value){
                if(tptr->left==NULL){
                    tptr->left=nptr;
                    break;
                }else{
                    tptr= tptr->left;
                }
            }
            else{
                if(tptr->data<value){
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

}
void print(node* node){
    if(node!=NULL){
        print(node->left);
        cout<<node->data<<" ";
        print(node->right);
    }
}

int main()
{
    insert(50);
    insert(4);
    insert(78);
    insert(67);
    insert(79);
    insert(3);
    print(Root);

    return 0;
}
