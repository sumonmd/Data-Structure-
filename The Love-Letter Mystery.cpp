#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    while(n--)
    {
        cin>>str;
        int ln=str.size();
        int cnt = 0;
        for(int i=0;i<ln;i++){
            if(str[i]!=str[ln-1-i]){
                while(str[i]!=str[ln-1-i]){
                    str[ln-1-i]
                }
            }
        }
    }


    return 0;
}
