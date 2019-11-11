#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long binary = n;
    long long decimal = 0;
    int pw = 0;
    while(n!=0){
        int rem = n%10;
        decimal = decimal+rem*pow(2,pw);
        n/=10;
        pw++;
    }
    cout<<"Binary ->"<<binary<<endl;
    cout<<"Decimal ->"<<decimal<<endl;
    return 0;
}
