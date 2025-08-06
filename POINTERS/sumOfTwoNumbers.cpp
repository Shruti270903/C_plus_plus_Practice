#include<iostream>
using namespace std;
int main(){
    int x=4, y=5;
    int *p1 = &x,  *p2 = &y;
    int sum = *p1 + *p2;
    cout<<"sum of x and y is :- "<<sum;
    int a, b;
    int *p3 = &a,  *p4 = &b;
    cin>>*p3>>*p4;
    int add = *p3 + *p4;
    cout<<add;
    int* p5=&x, P6=y;
    //int*a , b; this type of pointer variable decleration is not valid can suppose a is pointer variable and b is normal integer variable
    return 0;
}