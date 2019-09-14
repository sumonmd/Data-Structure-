#include<bits/stdc++.h>
using namespace std;

int arr[100];
int cnt;

void adjacent_from_bottom(int startIndex, int endIndex)
{
    int item = arr[startIndex];
    int i = startIndex;

    while(i/2>=1){
        if(arr[i/2]<item){
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

void print()
{
    for(int i=1;i<=cnt;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insert(int value)
{
    cnt++;
    arr[cnt] = value;
    adjacent_from_bottom(cnt,1);
}

void adjacent_from_top(int startIndex, int endIndex)
{
    int item = arr[startIndex];
    int i = startIndex*2;

    while(i<=endIndex){
        if(i+1<=endIndex && arr[i+1]>arr[i]){
            i+=1;
        }
        else if(arr[i]<=item){
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
    adjacent_from_top(1,cnt);
}


int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(9);
    print();
    cout<<"After Remove -----------------------"<<endl;
    remove();
    print();

    return 0;
}
