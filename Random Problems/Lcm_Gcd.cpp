#include <iostream>
using namespace std;
int gcd(int a, int b){
    int rem = a%b;
    if (rem==0) return b;
    return gcd(b,rem);
}
int main(){
    int x, y;
    cin >> x >> y;
    cout << "GCD of " << x << " & "<< y << " is "<< gcd(x,y) << endl;
    cout << "LCM of " << x << " & "<< y << " is "<< (x*y)/gcd(x,y) << endl;
}