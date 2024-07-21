#include <iostream>
using namespace std;
int main(){
    int x, n, ans = 1;
    cout << "Enter number : ";
    cin >> x;
    cout << "Enter power of a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++) ans = ans * x;
    cout << "Answer is " << ans << endl;
    return 0;
}