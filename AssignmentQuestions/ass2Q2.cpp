#include<iostream>
using namespace std;    
int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n-i-1; j++){ // for space
          cout<<" ";
        }
        for(int j=1; j<=2*i+1; j++){  //for no.
            cout<<char ( j+ 64) <<" ";
        }
        cout<<endl;
    }
    return 0;
}