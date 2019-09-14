#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    char str1[100],str2[100];
    cin>>t;
    while(t--){
        cin>>str1>>str2;
        int ln1 = strlen(str1);
        int ln2 = strlen(str2);
        for(i=0;i<(ln1-ln2);i++){
            if(str2[0]==str1[i]){
                for(j=1;j<ln2;j++){
                    if(str2[j]!=str1[i+j]){
                        break;
                    }
                }
                if(j==ln2){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
