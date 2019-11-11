#include<bits/stdc++.h>
using namespace std;

void Sum(int n)
{
    int sum = 0;
    if(n<10){
        sum+=n;
        cout<<n;
    }
    else{
        Sum(n/10);
        cout<<" "<<(n%10);

    }

}
int main()
{
    int a;
    cin>>a;
    Sum(a);

}
