#include<iostream>
using namespace std;
int main(){
    int* ptr1 =NULL;
    int* ptr2= 0;
    int* ptr3 = '\0';
    int a=10;
    // ptr1=&a;
    cout<<a<<" "<<&a<<endl;
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;
    // cout<<*ptr1<<endl;
    cout<<ptr1<<" "<<&ptr2<<" "<<&ptr3<<endl;
   int*ptr=NULL;
   cout<<ptr<<endl;
   cout<<&ptr;
    
    return 0;
}