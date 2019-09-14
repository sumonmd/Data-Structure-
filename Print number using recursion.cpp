#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    cout<<n<<" ";
    if(n<10){
        print(n+1);
        cout<<n<<" ";
    }
}

int main()
{
    print(1);
}
