#include<iostream>
using namespace std;
int main(){

    // WAP to swap 2 numbers using bitwise operators.
    int a, b;  // a = 10, b = 8
    cout << "Enter 2 numbers : ";
    cin >> a >> b;
    cout << "a = "<<a<< ", b = "<<b<<endl;
    
    // use XOR operator;
    a = a^b; // a = 2
    b = a^b; // b = 10
    a = a^b; // a = 8
    cout << "a = "<<a<< ", b = "<<b<<endl;

    return 0;
}