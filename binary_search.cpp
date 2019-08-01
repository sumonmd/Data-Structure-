#include<bits/stdc++.h>
using namespace std;

#define M 100010
int Binary_Search(int* arr,int st,int ed,int ck)
{
    int mid = (st+ed)/2;
    if(arr[mid]==ck){
        return mid;
    }
    else{
        if(st>=ed){
            return -1;
        }
        else if(arr[mid]<ck){
            return Binary_Search(arr,mid+1,ed,ck);
        }
        else if(arr[mid]>ck){
            return Binary_Search(arr,st,mid-1,ck);
        }
    }


}

int main()
{
    int n,t;
    cin>>n;
    int arr[M];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of : "<<endl;
    cin>>t;

    int x = Binary_Search(arr,0,n,t);
    if(x!=-1)
        cout<<"Position the number of value : "<<x<<endl;
    else
        cout<<" The key not found in array "<<endl;

    return 0;
}
