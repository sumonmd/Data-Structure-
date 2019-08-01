#include<bits/stdc++.h>
using namespace std;

int TwoDimensional(int arr[6][6])
{
    int mx =0,ans=-100;
    for(int i=0;i<4;i++){
            int sum;
        for(int j=0;j<4;j++){
                sum=0;
            sum=sum+arr[i][j]+arr[i][j+1]+arr[i][j+2];
            sum+=arr[i+1][j+1];
            sum+=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>ans)
                ans=sum;
        }
    }

    return ans;
}

int main()
{
    int a=-5;
    int arr[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    int mx = TwoDimensional(arr);
    cout<<mx<<endl;



    return 0;
}
