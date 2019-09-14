#include<bits/stdc++.h>
using namespace std;

void Pascal(int n)
{
    cout<<"   Pascal Triangle "<<endl;
    int pascal[51][51];

    pascal[0][0]=1;
    pascal[1][0] = 1;
    pascal[1][1] = 1;

    int j;
    for(int i=2;i<50;i++){
            pascal[i][0]=1;
        for(j=1;j<i;j++){
            pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j];
        }
    pascal[i][j]= 1;
    }

    for(int i=0;i<n;i++){
            for(int k=0;k<n-i;k++){
                cout<<" ";
            }
        for(int j=0;j<=i;j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    Pascal(19);

    return 0;
}
