#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter digit: ";
    cin>>n;
    int count=0;
    while(n>0){
        int lastdigit = n%10;
        count+=lastdigit;
        n=n/10;
    }
    cout<<count;
}