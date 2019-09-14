#include<bits/stdc++.h>
using namespace std;

void Redundent_Word()
{
    char str[100] = "Hello sumon sumon";
    string word = "";
    for(int i=0;i<strlen(str);i++){
        if(str[i]==" "){
            cout<<word<<endl;
            word="";
        }
        else{
            word=word+str[i];
        }
    }
}

int main()
{
    char str[100];
    Redundent_Word();

    return 0;
}
