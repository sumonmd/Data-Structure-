#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,3,5,7,9};
    int *p;
    p = &arr[0];

    for(int i=0;i<5;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;

    return 0;
}
