#include <iostream>
using namespace std;
int dummy(int n){
    //n++;
    //n = n / 2;
    n -= 5;
    //cout << "Number is "<< n <<endl;
    return n;
}
int main(){
    int n = 10;
    //cin >> n;
    dummy(n);
    cout<< dummy(n) << endl; // --> value will change as it is taking value of return from function
    cout << n << endl;   // --> this value of n is original, that is created in main function only
    return 0;
} 