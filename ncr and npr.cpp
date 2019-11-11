#include<bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}

long long find_ncr(int n,int r)
{
    long long result;
    long long nfactorial = factorial(n);
    result = nfactorial/(nfactorial*factorial(n-r));
    return result;
}

long long find_npr(int n,int r)
{
    long long result;
    long long nfactorial = factorial(n);
    result = nfactorial/factorial(n-r);
    return result;

}


int main()
{
    long long npr,ncr;
    int n,r;
    cin>>n>>r;
    ncr=find_ncr(n,r);
    npr = find_npr(n,r);
    cout<<"nCr is : "<<ncr<<endl;
    cout<<"nPr is : "<<npr<<endl;
    return 0;
}
