#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,d;
    cin>>n>>d;
    int value;
    long long int ary[n];
    for(int i=0;i<n;i++){
        cin>>value;
        ary[i]=value;
    }
    for(int i=0;i<d;i++){
            int temp = ary[0];
      for(int j=0;j<n-1;j++){
        ary[j]=ary[j+1];
      }
        ary[n-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<ary[i]<<" ";
    }
   // display();

    return 0;
}

