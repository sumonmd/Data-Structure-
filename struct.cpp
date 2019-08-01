#include<bits/stdc++.h>

using namespace std;



int main()
{   int num;
    cout<<"Enter the number of student: "<<endl;
    cin>>num;
    struct student{
    string name;
    string dept;
    int roll;
};
    student s[num];
    for(int i=0;i<num;i++){
        cin>>s[i].name>>s[i].dept>>s[i].roll;
    }

    for(int j=0;j<num;j++){
        cout<<"Name: "<<s[j].name<<" Roll: "<<s[j].roll<<" Dept: "<<s[j].dept<<endl;
    }



    return 0;
}
