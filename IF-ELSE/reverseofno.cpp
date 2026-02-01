#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    while(n>0){
        int r=0;
        r= r*10;
  int lastdigit=0;
  lastdigit= n%10;
   r+=lastdigit;
  n/=10;
  cout<<r;
}}