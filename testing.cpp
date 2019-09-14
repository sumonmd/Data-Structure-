#include<bits/stdc++.h>
using namespace std;

void Redundent_Word()
{
    char str[100] = "Hello sumon sagor";
    string word = "";
    for(int i=0;i<=strlen(str);i++){
        if(str[i]==' ' || str[i]=='\0'){
            cout<<word<<endl;
            word="";
        }
        else{
            word=word+str[i];
        }
    }
    //cout<<word<<endl;
}

int main()
{
    char str[100];
    Redundent_Word();

    return 0;
}

