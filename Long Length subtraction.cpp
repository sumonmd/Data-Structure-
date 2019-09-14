#include<bits/stdc++.h>
using namespace std;

string make_equal(string num,int ln)
{
    for(int i=0;i<ln;i++){
        num='0'+num;
    }
    return num;
}

string Subtract(string num1,string num2)
{
    int ln1 = num1.size();
    int ln2 = num2.size();

    if(ln1>ln2){
        num2 = make_equal(num2,ln1-ln2);
    }
    else if(ln2>ln1){
        num1 = make_equal(num1,ln2-ln1);
    }
    string sum="";
    int carry = 0;
    int ln = max(ln1,ln2);
    for(int i=ln-1;i>=0;i--){
        if((num1[i]-48)< (num2[i]-48)){
            int x = ((num1[i]-48)+10)-((num2[i]-48)+carry);
            sum = (char)(x+48)+sum;
            carry = 1;
        }
        else{
            int x = ((num1[i]-48))-((num2[i]-48)+carry);
            sum = (char)(x+48)+sum;
            carry = 0;
        }
    }
    return sum;
}
int main()
{
    cout<<Subtract("1234567890","1000000000");


    return 0;
}
