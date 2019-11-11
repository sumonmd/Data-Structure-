#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={454,3,234,23,98,12,234,454,34,98};
    int a,b,c;
    a=b=c=INT_MIN;
    for(int i=0;i<10;i++){
        if(arr[i]>a){
            c=b;
            b=a;
            a=arr[i];
        }
        else if(arr[i]>b && arr[i]!=a){
            c=b;
            b=arr[i];
        }
        else if(arr[i]>c && arr[i]!=b && arr[i]!=a){
            c=arr[i];
        }
    }
    cout<<"1st Max is: "<<a<<endl;
    cout<<"2nd Max is: "<<b<<endl;
    cout<<"3rd Max is: "<<c<<endl;
    return 0;
}
