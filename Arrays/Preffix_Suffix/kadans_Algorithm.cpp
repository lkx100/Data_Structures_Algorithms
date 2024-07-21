#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int maxi = INT_MIN, prefix = 0;
    for (int i = 0; i < 5; i++)
    {
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if ( prefix < 0 ) prefix = 0;
    }
    cout << maxi << endl;
    return 0;
}