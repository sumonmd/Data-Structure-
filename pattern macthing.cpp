#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int cnt =1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
            cout<<" ";
        }
        for(int k=0;k<cnt;k++){
            cout<<"* ";
        }
        cout<<endl;
        cnt+=2;
    }

    return 0;
}
