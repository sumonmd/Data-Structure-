#include<bits/stdc++.h>
using namespace std;

#define size 100001

int arr[size];
void seive()
{
    int i,j,root;
    for(int i=2;i<size;i++){
        arr[i]=1;
    }
    root = sqrt(size);
    for(int j=2;j<=root;j++){
        if(arr[j]==1){
            for(int i=2;i*j<=size;i++){
                arr[i*j]=0;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    seive();
    int root = sqrt(n);
    for(int i=2;i<=root;i++){
        if(n%i==0 && arr[i]==1){
            cout<<i<<" ";
        }
    }
    /* This is need for checking a prime number
    if(arr[n]==1){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }*/

    return 0;
}
