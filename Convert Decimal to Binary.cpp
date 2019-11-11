#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n;
    cin>>n;
    long long binary=0;
    int i=1,rem;
    while(n!=0){
         rem = n%2;
        cout<<binary<<" = rem "<<rem<<" "<<i<<endl;
        binary =rem*i+binary;
        n=n/2;
        i*=10;
    }
    cout<<n<<endl;
    cout<<"Binary Value is : "<<binary<<endl;

    return 0;
}
