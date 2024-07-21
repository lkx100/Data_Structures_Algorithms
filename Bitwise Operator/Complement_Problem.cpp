#include <iostream>
using namespace std;
int main(){
    int n, m;
    int mask = 0;
    cout << "Enter any number : ";
    cin >> n;
    m = n;
    if ( n == 0 ) cout << "Number is : 1" << endl;
    else {
    while ( n != 0 ){
        mask = (mask << 1) | 1;
        n = n >> 1;
    }
    int ans = (~m) & mask;
    cout << "Number is : " << ans << endl;
    }
    return 0;
}