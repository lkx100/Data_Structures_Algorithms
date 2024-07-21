#include <bits/stdc++.h>
using namespace std;
// brute force 
// ! O ( N*N )
// bool isPresent(vector<int> arr){
//     int s = 0;
//     while ( s < arr.size()-1 ){
//         int sum1 = 0, sum2 = 0;
//         for (int i = 0; i <= s; i++) 
//             sum1 += arr[i]; 
//         for (int i = s+1; i < arr.size(); i++ )
//             sum2 += arr[i];
//         if ( sum1 == sum2 ) return true;
//         if ( sum1 < sum2 ) s++;
//     }
//     return false;
// }
//************************************************
// ! optimized way --> O(n)
bool isPresent(vector<int> arr){
    int sum = 0, otherSum = 0, prefix = 0, s = 0;
    // find total sum 
    for (int i = 0; i < arr.size(); i++) sum += arr[i];
    // finding prefix's sum
    for (int i = 0; s < arr.size()-1; i++)
    {
        prefix += arr[i];
        otherSum = sum - prefix;
        if ( otherSum == prefix ) return true;
        s++;
    }
    return false;
}
int main(){
    vector<int> arr = {3,4,-2,5,8,20,-10,8};
    if ( isPresent(arr) ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}