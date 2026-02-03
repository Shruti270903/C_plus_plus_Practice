#include<iostream>
using namespace std;
int fatc(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
    fact *= i;
    }
}
int main(){
    int n;
cout<<"enter value of n: ";
    cin>> n;
    for (int i = 1; i <=n; i++){
        int fact =1;
        for(int j=2 ; j<=i ; j++){
        fact *= j;
        }
        cout<<fact<<endl;
    }
    

}