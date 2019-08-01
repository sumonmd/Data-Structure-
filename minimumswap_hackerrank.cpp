#include<bits/stdc++.h>
using namespace std;

#define M 100010
int arr1[M];
int arr2[M];
int main()
{
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        arr1[i]=val;
        arr2[i]=val;
    }
    sort(arr1,arr1+n);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr2[i]!=arr1[i]){
            int temp = arr2[i]-1;
            swap(arr2[i],arr2[temp]);
            cnt++;
            i--;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
