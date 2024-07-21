#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Hi Lucky !\nPlease Enter values of a & b : ";
    cin >> a >> b;
    cout<<"Value of a is "<<a << " and b is "<<b <<endl;
    if ( a > b ){
        cout<< "Value of a is " <<a;
    }
    else cout<< "Value of b is " <<b;
    return 0;
}