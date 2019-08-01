#include<bits/stdc++.h>
using namespace std;

#define M 100010

int binary_search(int* arr,int ft,int lt,int key)
{
    int mid = (ft+lt)/2;
    if(arr[mid]==key)
        return mid;
    else
        if(ft>=lt){
            return ft;
        }
       else if(arr[mid]>key){
            binary_search(arr,ft,mid-1,key);
        }
        else if(arr[mid]<key){
            binary_search(arr,mid+1,lt,key);
        }

}

int main()
{
    int n,key,temp;
    cin>>n;
    int arr[M];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    //sort(arr,arr+n);

    cin>>key;

    int max = binary_search(arr,0,n,key);
    cout<<arr[max];

    return 0;
}
