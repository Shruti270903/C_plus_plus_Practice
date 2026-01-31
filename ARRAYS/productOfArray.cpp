#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    cout<<"Product of array elements is: "<<product<<endl;
    return 0;
}