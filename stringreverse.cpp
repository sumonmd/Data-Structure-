#include<bits/stdc++.h>
using namespace std;
void reversee(string str,int ln)
{

    if(ln < 0){
        return ;
    }else{
        cout<<str[ln];
        return reversee(str,ln-1);
    }
}
int main()
{
    string str;
    cin>>str;
    reversee(str,str.size()-1);
}
