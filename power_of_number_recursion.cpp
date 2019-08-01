#include<bits/stdc++.h>
using namespace std;

int Pw(int b,int n)
{
    if(n==0)
        return 1;
    else
        return b*Pw(b,n-1);
}

int main()
{
    int base,power;
    cin>>base>>power;
    cout<<Pw(base,power);
    return 0;
}
