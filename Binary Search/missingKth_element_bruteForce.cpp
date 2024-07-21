#include <bits/stdc++.h>
using namespace std;
int missingK(vector<int> arr, int k){
    int end = arr.size()-1, count = 0, ans, j = 0;
    for ( int i = 1; 1; i++){
        if ( i != arr[j] ){
            ans = i;
            count++;
        }
        else if ( j < end ) j++;
        if ( count == k ) break;
    }
    return ans;
}
int main() {
    vector<int> arr = {1,2,3,4};
    int k = 2;
    int ans = missingK(arr, k);
    cout << "Missing element is "<< ans << endl;
}