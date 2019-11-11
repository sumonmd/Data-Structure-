#include<bits/stdc++.h>
using namespace std;

int cnt=0;
const int length=10;
int arr[length];
void Adjacent_from_bottom(int startIndex,int endIndex)
{
    int item = arr[startIndex];
    int i = startIndex;
    while(i/2>=1){
        if(item>arr[i/2]){
            arr[i]=arr[i/2];
            i=i/2;
        }
        else{
            break;
        }
    }
    arr[i]=item;
}
void insert(int value)
{
    if(cnt<length-1){
        cnt++;
        arr[cnt]=value;
        Adjacent_from_bottom(cnt,1);
    }
    else{
        cout<<"Heap Full"<<endl;
    }
}

void Adjacent_from_Top(int startIndex,int endIndex)
{
    int item = arr[startIndex];
    int i = startIndex*2;

    while(i<=cnt){
        if(i+1<=cnt && arr[i+1]>arr[i]){
            i+=1;
        }
        else if(item>=arr[i]){
            break;
        }
        else{
            int data = arr[i/2];
            arr[i/2] = arr[i];
            arr[i] = data;
            i*=2;
        }
    }
}
void remove()
{
    arr[1]=arr[cnt];
    cnt--;
    Adjacent_from_Top(1,cnt);
}
void print()
{
    if(cnt>0){
        for(int i=1;i<=cnt;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        cout<<"Empty Heap";
    }
    cout<<endl;

}
int main()
{
    insert(5);
    insert(67);
    insert(99);
    insert(12);
    print();
    remove();
    print();


    return 0;
}
