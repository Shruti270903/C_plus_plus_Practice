#include <bits/stdc++.h>
using namespace std;
int main( ) {
int n;
cout<<"enter n: ";
cin >> n;
int a = n, x = 0;
while (a > 0) {
x *= 10;
x += (a % 10);
a /= 10;
}
cout << n +x<<"\n";
}