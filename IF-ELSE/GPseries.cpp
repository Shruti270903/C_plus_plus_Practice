#include<iostream>
using namespace std;
int main(){
    int n;  //3 12 48 ...
    cout<<"enter n: ";
    cin>>n;
    int a=3, r=4;
   while(n--){
 cout<<a<<" ";
      a*= r;
}
}