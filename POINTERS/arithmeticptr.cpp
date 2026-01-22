#include<iostream>
using namespace std;
int main(){
int a=2;
int * p= &a;
cout<<*p<<endl;
(*p)++;  
cout<<*p;
p=p+1;
cout<<p<<endl;
bool b= true;
bool* q=&b;
cout<<q<<endl;
q=q+1;
cout<<q;
    return 0;
}