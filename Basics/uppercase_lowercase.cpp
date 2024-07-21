#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter any Character : ";
    cin >> ch;
    if ( ch == 'a' || ch == 'z' ) cout << "Lowercase";
    return 0;
}