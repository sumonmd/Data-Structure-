#include<bits/stdc++.h>
using namespace std;

int main()
{

    string stone;
    int n,cnt;
    cin>>n;
    int str[109][26];


    for(int i=0;i<n;i++){
        cin>>stone;
        for(int j=0;j<stone.size();j++){
            str[i][stone[j]-'a']++;
        }

    }
    cnt = 0;
    for(int i=0;i<26;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(str[j][i]==0){
                flag=1;
                break;
            }

        }
        if(flag==0){
            cnt+=1;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
