#include <iostream>
using namespace std;
int fibonacci(int n){
    
    if ( n == 0 ) return 0;
    if ( n == 1 ) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cout << "Enter the Nth term of the Fibonacci series : ";
    cin >> n;
    cout << n<< "th"<< " term is : "<< fibonacci(n) << endl;
    return 0;   
}
// 45 - 1134903170
// 46 - 1836311903