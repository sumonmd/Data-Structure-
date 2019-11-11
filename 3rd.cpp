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
    int arr[]={454,3,234,23,98,454,12,234,34,98};
    cout<<"Length of arr : "<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"Third Max is "<<Second_Max(arr,10)<<endl;



    return 0;
}

