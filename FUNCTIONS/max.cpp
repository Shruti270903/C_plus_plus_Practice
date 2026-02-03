#include<iostream>
using namespace std;
int maxthree(int a, int b, int c) {
int max;
if(a>b && a>c){
    // max=a;
    return a;
}
else if(b>a && b>c){
    // max=b;
    return b;
}
else{
    // max=c;
    return c;
}
return max;
}
int main(){
    int a=288, b=73, c=4;
    cout<<maxthree(a,b,c);
    return 0;
}