#include<bits/stdc++.h>
using namespace std;
int sumdigit(string str,int ln)
{

        if(ln<0)
            return 0;
        else
            return(str[ln]-48 + sumdigit(str,ln-1));

}

int main()
{
    int n;
    string str;
    string total_str ="";
    cin>>str>>n;
    for(int i=0;i<n;i++)
    {
        total_str+=str;
    }

    cout<<"String : "<<total_str<<endl;
    int sum =0;
    while(total_str.size()!=0){
        sum = sumdigit(total_str,total_str.size()-1);
    }

    cout<<sum<<endl;
    return 0;
}
