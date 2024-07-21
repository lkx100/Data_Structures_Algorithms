#include <iostream>
using namespace std;
int main(){
    int n, rem, sum = 0, diff, prod = 1;
    cout << "Enter any number : ";
    cin >> n;
    //i = n;
    while ( n > 0 ){
        rem = n % 10;
        sum = sum + rem;
        prod = prod * rem;
        n = n / 10;
    }
    // while ( i > 0 ){
    //     rem = i % 10;
    //     prod = prod * rem;
    //     i = i / 10;
    // }
    cout << "Difference is "<< prod-sum << endl;
    return 0;
}