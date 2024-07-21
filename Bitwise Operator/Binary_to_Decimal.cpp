#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, digit, add = 0, i = 0;
    cout << "Enter any Binary Number : ";
    cin >> n;
    while (n != 0)
    {
        digit = n % 10;
        add = (digit * pow(2, i)) + add;
        i++;
        n = n / 10;
    }
    cout << "You number is : " << add << endl;
}