#include<bits/stdc++.h>
using namespace std;

int Word_Search(char* str1,char* str2)
{
    int ln1 = strlen(str1);
    int ln2 = strlen(str2);
    cout<<str1<<" --- "<<str2<<endl;
    int j,ck=0;
    for(int i=0;i<=(ln1-ln2);i++){

        if(str2[0]==str1[i]){
            for(j=1;j<ln2;j++){
                if(str1[j+i]!=str2[j]){
                    break;
                }
            }
            if(j==ln2 && (str1[i+j]==' ' || str1[i+j]=='\0')){
            ck = 1;
            break;
        }
        }

    }
    return ck;
}

int main()
{

    int ck =Word_Search("Hi sumon1 md sumon","sumon");
    if(ck==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
