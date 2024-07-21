#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    if ( a > b ){
        if ( a > c ) cout << "Largest no = " << a <<"\n";
        else cout << "Largest no = " << c <<"\n";
    }
    else{
        if ( b > c ) cout << "Largest no = " << b <<"\n";
        else cout << "Largest no = " << c <<"\n";
    }   

    return 0;
}
