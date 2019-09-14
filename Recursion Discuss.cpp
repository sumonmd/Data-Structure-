#include<bits/stdc++.h>
using namespace std;

void recursion(int n)
{
    if(n<10){
        cout<<n;
    }
    else{
        int rem = n%10;
        recursion(n/10);
        cout<<" "<<rem;
    }
}
int main()
{
    recursion(123);


    return 0;
}
