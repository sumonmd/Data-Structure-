#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long pascal[53][53];
    pascal[0][0]=1;
    pascal[1][0]=1;
    pascal[1][1]=1;
    int n;
    cin>>n;
    int i,j;
    for(i=2;i<=n;i++){
        pascal[i][0]=1;

        for(j=1;j<=i-1;j++){
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
        pascal[i][j]=1;

    }

    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<pascal[i][k]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
