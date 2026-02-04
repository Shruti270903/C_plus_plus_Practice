#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"n = "; 
    cin>>n;
for(int i=0; i<n; i++){  //no. of lines 
    for(int j=0; j<n-1-i; j++){  // no. of spaces 
    cout<<" ";}
    for(int j=0; j<n ; j++){  // no. of stars
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}