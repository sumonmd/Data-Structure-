#include<bits/stdc++.h>
using namespace std;

int arr[10001];
int cnt;

void adjust_from_bottom(int startIndex,int endIndex)
{
    int data = arr[startIndex];
    int n = startIndex;
    while(n/2>=1){
        if(data>arr[n/2]){
            int temp = arr[n/2];
            arr[n/2] = data;
            arr[n] = temp;
            n/=2;
        }
        else{
            break;
        }
    }
}

void insert(int value)
{
    cnt++;
    arr[cnt]=value;
    adjust_from_bottom(cnt,1);
}
void print()
{
    for(int i=1;i<=cnt;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    insert(34);
    insert(20);
    insert(4);
    insert(344);
    print();

    return 0;
}
