#include<bits/stdc++.h>
using namespace std;
int arr[100];
int cnt;

void Adjust_From_Bottom(int startindex,int endindex)
{
    int item = arr[cnt];
    int i = cnt;

    while(i/2>=1){
        if(item<arr[i/2]){
            int data = arr[i/2];
            arr[i/2] = item;
            arr[i] = data;
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
    Adjust_From_Bottom(cnt,1);
}
void print()
{
    for(int i=1;i<sizeof(arr)/sizeof(arr[1]);i++){
        if(arr[i]!=0){
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    insert(100);
    insert(4);
    insert(34);
    insert(2);
    insert(5);
    insert(1000);
    insert(1);
    print();

    return 0;
}
