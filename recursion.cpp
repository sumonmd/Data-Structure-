#include<bits/stdc++.h>
using namespace std;

void recursion(int n)
{
    if(n<10)
        cout<<n;
    else
    {
        recursion(n/10);
        cout<<" "<<n%10;
    }


}

int main()
{
    recursion(123);

    return 0;
}
