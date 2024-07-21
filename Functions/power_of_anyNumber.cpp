#include <iostream>
using namespace std;

int power(){
    int a, b, ans = 1;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        ans = ans*a;
    }
    return ans;
}

int main(){
    //int a, b;
    //int p = power(9,2);
    cout << power() << endl;
    return 0;
}