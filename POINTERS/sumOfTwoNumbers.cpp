#include<iostream>
using namespace std;
int main(){
    int x=4, y=5;
    int *p1 = &x,  *p2 = &y;
    int sum = *p1 + *p2;
    cout<<"sum of x and y is :- "<<sum;
    int a, b;
    int *p3 = &a,  *p4 = &b; 
    cin>>*p3>>*p4; // input two numbers
    int add = *p3 + *p4; // add two numbers
    cout<<add; // print the sum of two numbers
    int* p5=&x, P6=y; // p5 is a pointer to x, P6 is a copy of y
    //int*a , b; this type of pointer variable decleration is not valid can suppose a is pointer variable and b is normal integer variable
    //int *p = y, *p1= a; also show error
    return 0;
}