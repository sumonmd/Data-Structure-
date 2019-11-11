#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,y,lcm,gcd;
    scanf("%d%d",&x,&y);
    if(x>y){
        a=x;
        b=y;
    }
    else{
        a=y;
        b=x;
    }
    while(b!=0){
        int t=b;
        b = a%b;
        a=t;
    }
    gcd = a;
    lcm = (x*y)/gcd;
    printf("GCD is = %d and LCM is = %d",gcd,lcm);

    return 0;

}
