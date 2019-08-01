#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int newarr[n];
    for(int j=0;j<n;j++){
        int rm = (j+d)%n;
        newarr[j]=arr[rm];
    }
    for(int i=0;i<n;i++){
        cout<<newarr[i]<<" ";
    }



    return 0;
}
