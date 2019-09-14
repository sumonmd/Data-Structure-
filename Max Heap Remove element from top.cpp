#include<bits/stdc++.h>
using namespace std;
int arr[100];
int cnt;

void Adjust_From_Bottom(int startIndex,int endIndex)
{
    int item = arr[startIndex];
    int i = startIndex;

    while(i/2>=1){
        if(item > arr[i/2]){
            int data = arr[i];
            arr[i] = arr[i/2];
            arr[i/2]= data;
            i/=2;
        }
        else{
            break;
        }
    }
}

void Adjust_From_Top(int startIndex,int endIndex)
{
    int item = arr[startIndex];
    int i = startIndex*2;
    while(i<=endIndex){
        if(i+1<=endIndex && arr[i+1]>arr[i]){
            i=i+1;
        }
        else if(item>=arr[i]){
            break;
        }
        else{
            arr[i/2]=arr[i];
            arr[i]=item;
            i*=2;
        }
    }
}


void insert(int value)
{
    cnt++;
    arr[cnt]=value;
    Adjust_From_Bottom(cnt,1);
}
void Remove()
{
    if(cnt>0){
        arr[1]=arr[cnt];
        cnt--;
        Adjust_From_Top(1,cnt);
    }
}

void print()
{
    for(int i=1;i<sizeof(arr)/sizeof(arr[1]);i++){
        if(arr[i]!=0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}


int main()
{
    insert(40);
    insert(35);
    insert(23);
    cout<<"Heap : ";
    print();
    insert(9);
    insert(100);
    cout<<"Heap : ";
    insert(1000);
    print();
    cout<<"After Remove : ";
    Remove();
    Remove();
    print();

    return 0;
}
