#include<bits/stdc++.h>
using namespace std;

map<char,int>mp;
set<char>mset;

int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    char c;
    cin>>c;
    cout<<mp[c]<<endl;

    return 0;
}
