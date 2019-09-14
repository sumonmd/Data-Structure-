#include<bits/stdc++.h>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size][size]={0};

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the Edge Number "<<endl;
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int from,to;
        cin>>from>>to;
        arr[from-1][to-1]=1;
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter number of Neighbor : "<<endl;
    int n;
    cin>>n;

    for(int i=0;i<size;i++){
        if(arr[n-1][i]==1){
            cout<<n<<" -->"<<i+1<<endl;
        }
    }
}
