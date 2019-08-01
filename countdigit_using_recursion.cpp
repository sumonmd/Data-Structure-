#include<bits/stdc++.h>
using namespace std;

int Count(int n)
{
    static int cnt=0;
    if(n>0){

      cnt+=n%10;
      Count(n/10);
    }else{
        return cnt;
    }

}
int main()
{
    int n;
    cin>>n;
    cout<<Count(n);

    return 0;
}
