#include<bits/stdc++.h>
using namespace std;

void Adding_Array(int arr1[],int arr2[])
{
    int i,j,k;
    i=j=k=0;
    int arr[100];
    while(k<8){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9};
    Adding_Array(arr1,arr2);
    return 0;
}
