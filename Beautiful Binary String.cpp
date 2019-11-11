#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int ans=0;
    cin>>n;
    char str[n];
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]=='0' && str[i+1]=='1'&& str[i+2]=='0'){
                str[i+2]='1';
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
