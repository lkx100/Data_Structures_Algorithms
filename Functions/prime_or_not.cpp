#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 1;  // Not a Prime
            break;
        }
    }
    return 0;  // Prime Number
}
int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;
    if ( num == 1 ) cout << "1 is neither Prime nor Composite"<<endl;
    else {
    if (isPrime(num))
    // hello world
    {
        cout << "Not a Prime Number" << endl;
    }
    else cout << "Prime Number" << endl;
    }    
    return 0;
}