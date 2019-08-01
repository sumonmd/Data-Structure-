#include<bits/stdc++.h>
using namespace std;

#define M 2147483647

int main()
{
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum>M-arr[i])
            break;
        else
            sum+=arr[i];

    }
    cout<<"sum : "<<sum<<endl;


    return 0;
}
