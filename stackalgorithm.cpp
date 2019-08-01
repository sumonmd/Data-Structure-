#include<bits/stdc++.h>
using namespace std;

int arr[10];
int top=0;
void push(int value)
{
    if(top>=10){
        cout<<"Stack Overflow "<<endl;
    }else{
        arr[top]=value;
        top++;
    }

}
void pop()
{
    if(top<0){
        cout<<"Stack Overdown"<<endl;
    }else{
        top--;
    }

}

void display()
{
    for(int i=0;i<top;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    pop();
    push(10);
    display();



    return 0;
}
