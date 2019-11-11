#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int l,int m,int r)
{
    cout<<"Left : "<<l<<endl;
    cout<<"Mid : "<<m<<endl;
    cout<<"Right: "<<r<<endl;
    cout<<"-------------------"<<endl;
}
void mergeSort(int arr[],int left,int right)
{
    if(left<right){
        int mid = left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        Merge(arr,left,mid,right);
    }
}

int main()
{
    int arr[]={9,1,8,2,7,6,3,4,11,0};
    int right = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,right-1);

    return 0;
}
