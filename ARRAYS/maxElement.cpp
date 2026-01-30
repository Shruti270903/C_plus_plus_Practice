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
    int maxElement=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
    }
    cout<<"Maximum element in the array is: "<<maxElement<<endl;
    
    return 0;
}