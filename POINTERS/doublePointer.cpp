#include<iostream>
using namespace std;
int main(){
   int x=5;
   int*ptr = &x; // pointer to integer x
   int**p=&ptr; // pointer to pointer ptr
    cout<<x<<endl;      // prints value of x
    cout<<ptr<<endl;    // prints address of x
    cout<<*ptr<<endl;   // prints value of x using pointer ptr
    cout<<p<<endl;      // prints address of pointer ptr
    cout<<*p<<endl;     // prints address of x using pointer to pointer p
    cout<<**p<<endl;    // prints value of x using pointer to pointer p
    
    return 0;
}