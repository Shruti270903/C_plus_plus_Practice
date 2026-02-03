 #include<iostream>
 #include<limits.h>
 using namespace std;
 int main(){
  int arr[5] ={2,4,5,7,6};
  int max = INT_MIN;
  for(int i=0; i<=5; i++){
   if(arr[i]>max){
      max = arr[i];
   }
  }
  cout<<"maximum value is"<<max[arr];
    return 0;
  }