#include <bits/stdc++.h>
using namespace std;
// to calculate factorial
int factorial(int p){
    if ( p == 1 ) return 1;

    return p*factorial(p-1);
}
// to calculate nCR
// int nCr(int n, int r){
//     int ans = factorial(n)/(factorial(n-r)*factorial(r));
    
//     return ans;
// }
int main(){
    int a, b;
    cout << "Enter values of n & r : ";
    cin >> a >> b;
    //cout << a<<"C"<<b<< " value is : "<< nCr(a,b) << endl;
    cout << a<<"C"<<b<< " value is : "<< factorial(a)/(factorial(a-b)*factorial(b)) << endl;
    return 0;
}