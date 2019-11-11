#include<bits/stdc++.h>
using namespace std;

int palindrome(string str,int left,int right){
    return (left>=right || str[left]==str[right] && palindrome(str,left+1,right-1));
}

int main()
{
    string str;
    cin>>str;
    int length = str.size();
    if(palindrome(str,0,length-1)){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}
