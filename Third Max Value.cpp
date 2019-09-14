#include<bits/stdc++.h>
using namespace std;

int Second_Max(int arr[],int n)
{
    int a,b,c;

    a=b=c=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>a){
            c=b;
            b=a;
            a = arr[i];
        }
        else if(arr[i]>b && arr[i]!=a){
            c=b;
            b=arr[i];
        }
        else if(arr[i]>c && arr[i]!=b){
            c=arr[i];
        }

    }
    return c;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Length of arr : "<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"Third Max is "<<Second_Max(arr,n)<<endl;



    return 0;
}
