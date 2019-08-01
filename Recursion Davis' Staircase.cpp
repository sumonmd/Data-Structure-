#include<bits/stdc++.h>
using namespace std;

int recursion(int n)
{
    if(n==1 || n==0)
        return 1;
    else if (n==2)
        return 2;
    else
        return recursion(n-1)+recursion(n-2)+recursion(n-3);
}

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cout<<recursion(n)<<endl;;
    }

    return 0;
}
