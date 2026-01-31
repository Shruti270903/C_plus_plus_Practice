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
    int count =0;
    for(int i=0;i<n;i++){
        count++;
    }
    cout<<"Total number of elements in array is: "<<count<<endl;
    return 0;
}