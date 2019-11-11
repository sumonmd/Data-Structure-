#include<bits/stdc++.h>
using namespace std;

string make_equal(string str,int ln)
{
    for(int i=0;i<ln;i++){
        str="0"+str;
    }
    return str;
}

string Adding(string str1,string str2)
{
    int ln1 = str1.size();
    int ln2 = str2.size();
    if(ln1<ln2){
        str1 = make_equal(str1,ln2-ln1);
    }
    if(ln1>ln2){
        str2 = make_equal(str2,ln1-ln2);
    }
    string sum="";
    int carry = 0;
    int ln = max(ln1,ln2);
    for(int i=ln-1;i>=0;i--){
        int x = carry+(str1[i]-48)+(str2[i]-48);
        carry = x/10;
        sum = (char)((x%10)+48)+sum;
    }
    if(carry){
        sum=(char)(carry+48)+sum;
    }
    return sum;
}


int main()
{
    string fibo[5001];
    fibo[0]="0";
    fibo[1]="1";
    for(int i=2;i<5001;i++){
        fibo[i]=Adding(fibo[i-1],fibo[i-2]);
    }
    int n;
    cin>>n;
    cout<<fibo[n-1]<<endl;

    return 0;
}
