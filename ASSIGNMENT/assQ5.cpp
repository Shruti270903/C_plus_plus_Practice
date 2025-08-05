#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : " ;
    cin>>n;
    //upper triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
          cout<<"*";
          }     cout<<endl;
    }
    //lower triangle
          for(int i=0; i<=n-1; i++){
          for(int j=1; j<=n-i-1; j++){
            cout<<"*";
              }    
         cout<<endl;
          }
    return 0; 
}