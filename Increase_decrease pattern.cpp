#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
            int num = i;
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        num--;
        num--;
        for(int j=num;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
