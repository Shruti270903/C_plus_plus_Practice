#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter value of a:- "<<endl;
    cin>>a;
    cout<<"value of a is:- "<<a<<endl;
    cout<<"address of a is :- "<< & a << endl;
    int *p=&a;
    cout<<*p;  //dereference opearator or star operator
    return 0;
}