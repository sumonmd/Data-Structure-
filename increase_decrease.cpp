#include<bits/stdc++.h>
using namespace std;

void recursion(int a,int n)
{
    cout<<a<<" ";
    if(a<n)
    {
        recursion(a+1,n);
        cout<<a<<" ";
    }
}
int main()
{
    int n;
    cin>>n;

    recursion(1,n);

    return 0;
}
