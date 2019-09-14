#include<bits/stdc++.h>
using namespace std;


int main()
{
    int num,rev=0;
    cin>>num;
    while(num!=0){
        rev*=10;
        rev = rev + num%10;
        num/=10;
    }
    cout<<rev<<endl;
    return 0;
}
