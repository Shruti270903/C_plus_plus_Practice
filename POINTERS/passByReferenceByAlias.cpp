// #include <iostream>
// using namespace std;
// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }
// int main()
// {
//     int a = 3, b = 5;
//     int *x = &a;
//     int *y = &b;
//     swap(a, b); 
//     cout<<a<<" "<< b;

// }
#include<iostream>
using namespace std;
void swap(int &a, int &b){    // pass by reference
    int temp = a;
     a = b;
     b = temp;
     return;

}
int main(){
    int a,b;
    cout<<"enter a & b:-  ";
    cin>>a>>b;
    swap(a,b);  
    cout<<a<<" "<<b;
    return 0;
}