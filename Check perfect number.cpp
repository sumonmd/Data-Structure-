#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int perfect = 0;
    int sqt = n/2;
    for(int i=1;i<=sqt;i++){
        if(n%i==0){
            perfect+=i;
        }
    }
    printf("Perfect value: %d\n",perfect);
    if(n==perfect){
        printf("Perfect Number");
    }
    else{
        printf("Not Perfect Number");
    }


    return 0;
}
