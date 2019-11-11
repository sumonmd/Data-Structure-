#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int rev = 0;
    int original = n;
    while(n!=0){
        int rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    if(original==rev){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }

    return 0;
}
