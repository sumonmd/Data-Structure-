#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
node* Head = NULL;

void insert(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;
    if(Head==NULL){
        Head = nptr;
    }
    else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next = nptr;
    }
}
void remove_duplicate()
{
    node* ptr1 , *ptr2;
    ptr1 = Head;

    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;

        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL)
        {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data)
            {
                /* sequence of steps is important here */
                //dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                //delete(dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }


}

void display()
{
    node* ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(6);
    insert(8);
    insert(6);
    display();
    remove_duplicate();
    display();

    return 0;
}
