#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5],first=-9999,second=0,value;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
    }
    cout<<second<<endl;
}
