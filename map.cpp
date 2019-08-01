#include<iostream>
#include<map>
#include<iterator>
#include<string.h>

using namespace std;

int main()
{
    map<char,int>charcount;
    for(char i='a';i<'z';i++){
        charcount[i]=0;
    }
    char str[100];
    cin>>str;
    for(int i=0;i<strlen(str);i++){
        charcount[str[i]]++;
    }
    map<char,int>::iterator it;

    for(it=charcount.begin();it!=charcount.end();it++){
            if(it->second!=0)
            cout<<it->first<<"  "<<it->second<<endl;
    }
    return 0;
}
