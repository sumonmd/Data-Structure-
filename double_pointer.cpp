#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    int **q;
    p=&a;
    q=&p;
    cout<<" value of a : "<<a<<endl;
    cout<<" address of a : "<<&a<<endl;
    cout<<" value of p  : "<<p<<endl;
    cout<<" address of p : "<<&p<<endl;
    cout<<" value of q : "<<**q<<endl;
    cout<<" address of q : "<<&q<<endl;

    /*
       ----------->Array Pointer<-------------
    */
    int arr[5]={1,2,3,4,5};
    int *pt;
    pt =&arr[0];

    for(int i=0;i<5;i++)
    {
        cout<<"address : "<<pt+i<<" value : "<<*(pt+i)<<" ";
    }
    /*
        Memory dynamic alocation
    */
    cout<<endl;
    int *ptr;
    {
        int num = 7;
        ptr = new int(10);
        cout<<ptr<<" "<<*ptr<<endl;
    }
    cout<<ptr<<" "<<*ptr<<endl;

    delete ptr;
    cout<<ptr<<" "<<*ptr<<endl;



    return 0;
}
