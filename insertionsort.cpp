#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={3,4,1,2,0};
    int j;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

    return 0;
}
