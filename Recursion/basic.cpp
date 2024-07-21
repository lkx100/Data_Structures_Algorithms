#include <bits/stdc++.h>
using namespace std;

void increasing(int n) {

    if (n == 0) return;

    increasing(n-1);
    cout << n << " " << endl;
}

void decreasing(int i, int n) {
    
    if (i > n) return;

    decreasing(i+1, n);
    cout << i << " " << endl;
}

int main(){

    increasing(5);
    cout << endl;
    decreasing(1, 5);
    return 0;
}