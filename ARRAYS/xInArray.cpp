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
    int x;
    cout<<"Enter element to search: ";
    cin>>x;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"Element found in array"<<endl;
    }
    else{
        cout<<"Element not found in array"<<endl;
    }
    return 0;
}