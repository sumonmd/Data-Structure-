#include<bits/stdc++.h>
using namespace std;

int recursion(char* str,int left,int right)
{
  return (left>=right || (str[left]==str[right]) && recursion(str,left+1,right-1));
}

int main()
{
    int t;
    char str[100];
    cin>>t;
    while(t--){
        cin>>str;
        int ln = strlen(str);
        if(recursion(str,0,ln-1)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"Not Palindrome"<<endl;
        }
    }
}
