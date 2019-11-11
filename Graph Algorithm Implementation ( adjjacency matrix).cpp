#include<bits/stdc++.h>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size][size]={0};

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            arr[i][j]=0;
        }
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int to,from;
        cin>>to>>from;
        arr[to-1][from-1]=1;
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
