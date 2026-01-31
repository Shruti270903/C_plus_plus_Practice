#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int marks[n];
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    cout<<"marks of students:";
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
        else{
            cout<<marks[i]<<" ";
        }
    }

    return 0;
}