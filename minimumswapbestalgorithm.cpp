#include<bits/stdc++.h>
using namespace std;

int minimum_swap(int* arr)
{
    int ln = sizeof(arr)/sizeof(arr[0]);
    int cnt =0;
    for (int i=0;i<ln;i++)
    {
        while(arr[i]!=i+1){
            int temp = arr[i];
            arr[i]=arr[arr[i]-1];
            arr[temp-1]=temp;
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minimum_swap(arr)<<endl;

    return 0;
}
