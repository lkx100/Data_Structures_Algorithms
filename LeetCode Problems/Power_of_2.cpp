#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    bool a = 0;
    cout << "Enter any number : ";
    cin >> n;
    for (int i = 0; i <= 30; i++){
        //int ans = pow(2,i);
        if ( pow(2,i) == n ){
            a = 1;
            break;   
        }
    }
    if ( a == 1 ) cout << "True" << endl;
    else cout << "False" << endl;

    return 0;
}