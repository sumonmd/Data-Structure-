#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2&&a>0&&b>0){
        //printf("%d %d",a,b);
        cout<<a<<" "<<b<<endl;
        if(a>b){
            swap(a,b);
        }
        int cnt,sum=0;
        for(int i=a;i<=b;i++){
                cnt=1;
           for(int j=i;j!=1;j=j){
            if(j%2==0){
                j=j/2;
            }
            else if(j%2!=0){
                j=3*j+1;
            }
            cnt++;
           }
           if(cnt>sum){
            sum=cnt;
           }
        }
        cout<<sum<<endl;

    }
    return 0;
}
