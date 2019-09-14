#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,n,line;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>l>>n;
        line = 2*l-1;
        for(int j=0;j<l;j++){
            for(int k=j;k>=0;k--){
                cout<<n<<" ";
            }
            cout<<endl;
        }
        for(int j=l;j>0;j--){
            for(int k=j-1;k>0;k--){
                cout<<n<<" ";
            }
            cout<<endl;
        }
    }
    return 0;

}
