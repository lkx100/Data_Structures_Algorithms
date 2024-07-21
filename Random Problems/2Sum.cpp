#include <bits/stdc++.h>
using namespace std;
// int binarySearch(vector<int> arr, int target){
//     int s = 0, e = arr.size()-1, mid;
//     mid = s + (e-s)/2;
//     while ( s <= e ){
//         if ( mid == target ) return mid;
//         if ( mid > target ) e = mid-1;
//         if ( mid < target ) s = mid+1;
//         mid = s + (e-s)/2;
//     }
//     return mid;
// }
// bool search(vector<int> arr, int target){
//     int x = binarySearch(arr,target);
//     if ( target == arr[x] ) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }
// int index(vector<int> arr, int target){
//     return binarySearch(arr, target);
// }
// int main(){
//     vector<int> arr = {2,7,11,15,27};
//     vector<int> ans;
//     int target = 22, x, y;
//     for ( int i = 0; i < arr.size(); i++ ){
//         int start = i+1, end = arr.size()-1; // binary search from start to end
//         x = target - arr[i];
//         if ( binary_search(arr.begin(), arr.end(),x) ){
//             //y = index(arr, target);
//             y = binary_search(arr.begin(), arr.end(),x);
//             ans.push_back(i);
//             ans.push_back(y);
//             break;
//         }
//     }
//     sort(ans.begin(), ans.end());
//     for ( int i = 0; i < ans.size(); i++ ){
//         cout << i << endl;
//     }
//     return 0;
// }
void twoSum(vector<int> arr, int target){
    int s = 0, e = arr.size()-1, a = 0;
    pair<int,int> p;
    while ( s < e ){
        if ( arr[s] + arr[e] == target ) {
            p.first = s;
            p.second = e;
            a = 1;
            break;
        }
        if ( arr[s] + arr[e] < target )  s++;
        if ( arr[s] + arr[e] > target )  e--;
    }
    if ( a == 1 ) { 
        cout << "Indexes = [ " << p.first << " , " << p.second <<" ]" << endl;
        cout << "Elements = [ " << arr[p.first] << " , " << arr[p.second] <<" ]" << endl;
    }
    else cout << "No such element exists" << endl;
}
int main(){
    vector<int> arr = {2,7,11,15,27};
    int target = 22;
    int s = 0, e = arr.size()-1;
    twoSum(arr, target);

    return 0;
}