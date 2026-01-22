#include<iostream>
using namespace std;
void find(int n, int*ptr1, int*ptr2){
    *ptr2=n%10; //ld
    while(n>=10){
        n=n/10; 
    }
    *ptr1=n; //fd   
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fd, ld;
    int* ptr1= &fd;
    int* ptr2 = &ld;
    find(n, ptr1, ptr2);
    cout<< fd<<" "<< ld<<endl;
    return 0;
}