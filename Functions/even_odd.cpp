#include <iostream>
using namespace std;
// Function to check even / odd number
bool isEven(int a){
    if ( a % 2 == 0 )  return 0;
    else return 1;
    
}

int main(){
    int num;
    cout << "Enter any number : ";
    cin >> num ;
    if ( isEven(num) ) cout << "Number is Odd" << endl;
    else cout << "Number is Even" << endl;
    
    //cout << even_odd() << endl;
    return 0;
}