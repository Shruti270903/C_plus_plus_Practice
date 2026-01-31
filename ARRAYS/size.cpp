#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,53,2,4,22,52,52,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is: "<<size<<endl;
    //or also divide by 4 because each int takes 4 bytes
    return 0;

}