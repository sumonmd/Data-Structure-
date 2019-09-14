#include<bits/stdc++.h>
using namespace std;

#define size 100
int q[size],front=0,rear=0;
void enque(int value)
{
    q[rear]=value;
    rear++;
}
void dque()
{
    if(rear==front){
        cout<<"Empty Queue"<<endl;
    }
    else{
        front++;
    }
}
void display()
{
    if(front==rear){
        cout<<"Empty Queue"<<endl;
    }
    else{
        int temp = front;
        cout<<"current queue element : ";
        for(int i=temp;i<rear;i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    enque(5);
    enque(100);
    display();
    enque(1);
    enque(8);
    display();
    dque();
    display();
    return 0;
}
