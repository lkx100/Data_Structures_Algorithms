#include <bits/stdc++.h>
using namespace std;
int squareRoot(int a){
    int start = 0, end = a, ans;
    if ( a < 2 ) return a;
    int mid = start + (end-start)/2;
    while ( start <= end ){
        if ( mid == a/mid )  return mid;
        if ( mid > a/mid )  end = mid-1;
        if ( mid < a/mid ){
            ans = mid;
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter any number ";
    cin >> n;
    cout << "Square Root of " << n << " is " << squareRoot(n);
    return 0;
}