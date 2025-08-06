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
    return 0;
}