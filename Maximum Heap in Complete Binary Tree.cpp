#include<bits/stdc++.h>
using namespace std;
int arr[100];
int cnt;
void Adjust_From_Bottom(int startIndex,int endIndex)
{
    int item = arr[startIndex];
    int i = startIndex;
    while(i/2>=1){
        if(item>arr[i/2]){
            int data = arr[i/2];
            arr[i/2] = item;
            arr[i]=data;
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
        if(i+1<=endIndex && arr[i]<arr[i+1]){
            i+=1;
        }
        else if(item>arr[i]){
            break;
        }
        else
        {
            int data = arr[i];
            arr[i] = item;
            arr[i/2] = data;
            i=i*2;
        }
    }
}
void insert(int value)
{
    cnt++;
    arr[cnt]=value;
    Adjust_From_Bottom(cnt,1);

}
void remove()
{
    arr[1]=arr[cnt];
    cnt--;
    Adjust_From_Top(1,cnt);
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
    insert(2);
    insert(0);
    insert(1);
    insert(100);
    insert(99);
    insert(1000);
    print();
    cout<<"After Remove ";
    remove();
    remove();

    print();
    return 0;
}
