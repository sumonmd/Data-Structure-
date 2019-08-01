#include<bits/stdc++.h>
using namespace std;

int len(char *str)
{
    static int length=0;
    if(*str!=NULL){
      length++;
        len(++str);
    }else{
        return length;
    }

}


int main()
{
    char str[100];
    cin>>str;
    cout<<len(str);
    return 0;
}
