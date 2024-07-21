#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, ans = 0, digit;
    cout << "Enter any number : ";
    cin >> n;
    while ( n != 0 ){
        digit = n % 10;

        if ( ans > INT_MAX/10 || ans < INT_MIN/10 ) return 0;  // If value of integer exceeds the limits then return 0;
    
        ans = ans*10 + digit;
        n = n / 10;
    }
    cout << "Reverse number is : " << ans << endl;
    return 0;
}