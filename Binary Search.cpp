#include<bits/stdc++.h>
using namespace std;

int Binary_search(int* arr,int n)
{
    int left = 0;
    int right = 10;
    int ck = 0;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==n){
            ck= 1;
            break;
        }
        else if(arr[mid]<n){
            left = mid+1;
        }
        else if(arr[mid]>n){
            right = mid-1;
        }
    }
    return ck;
}

int main()
{
    int arr[10]={454,3,234,23,98,454,12,234,34,98};
    sort(arr,arr+10);
    int n;
    cin>>n;

    int ck = Binary_search(arr,n);
    if(ck==1){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}
