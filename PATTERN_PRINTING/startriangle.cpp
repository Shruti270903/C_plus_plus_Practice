#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    //int m;
    //cout<<"enter no. of columns : ";
    //>>m;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=i ; j++){
        cout<<"*";
    }
    cout<<"\n";
}} 