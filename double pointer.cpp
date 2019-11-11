#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v1=10;
    int *p1;
    int **p2;
    p1 = &v1;
    p2 = &p1;
    cout<<"address of v1 -> "<<&v1<<endl;
    cout<<"address of p1 -> "<<p1<<endl;
    cout<<"address of p2 -> "<<p2<<endl;

    return 0;
}
