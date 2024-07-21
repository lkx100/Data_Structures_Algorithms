#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << "a&b is "<< (a&b) << endl;
    cout << "a|b is "<< (a|b) << endl;
    cout << "~a is "<< ~a << endl; 
    cout << "~b is "<< ~b << endl;
    cout << "a^b is "<< (a^b) << endl;

    return 0;
}