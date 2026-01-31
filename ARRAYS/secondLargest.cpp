#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //find second largest element in array
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] != largest && arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    cout<<"Second largest element is : "<<secondLargest<<endl;
    cout<<"Largest element is : "<<largest<<endl;
    return 0;
}