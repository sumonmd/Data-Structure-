#include<bits/stdc++.h>
using namespace std;

#define rang 213438
int seive(int n)
{
    int arr[rang];
    for(int i=2;i<rang;i++){
        arr[i]=0;
    }
    int root = sqrt(rang);
    for(int i=2;i<root;i++){
        if(arr[i]==0){
            for(int j=2;i*j<rang;j++){
                arr[i*j]=1;
            }
        }
    }
    if(arr[n]==0){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
    int ck = seive(4);
    if(ck==1){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }

    return 0;
}
