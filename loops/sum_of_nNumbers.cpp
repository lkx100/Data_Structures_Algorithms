#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 0, sum = 0;
    while ( i <= n*2 ){ 
        sum = sum + i;
        i = i + 2;
    }
    cout << sum << endl;
    return 0;
}