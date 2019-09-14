#include<bits/stdc++.h>
using namespace std;
int arr[100];
int cnt;
void adjacent_from_bottom(int startIndex,int endIndex)
{
    int i = startIndex;
    int data = arr[startIndex];
    while(i/2>=1){
        if(arr[i/2]>data){
            int temp = arr[i/2];
            arr[i/2] = arr[i];
            arr[i] = temp;
            i/=2;
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
    adjacent_from_bottom(cnt,1);
}

void print()
{
    for(int i=1;i<=cnt;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    insert(1);
    insert(4);
    insert(6);
    insert(8);
    insert(7);
    insert(9);
    print();

    return 0;
}
