#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,value;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
            count++;
    }
    for(int i=0;i<n;i++){
        if(i<count)
            arr[i]=0;
        else
          arr[i]=1;
    }

    /*int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }*/
    cout<<"after sorting : "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
