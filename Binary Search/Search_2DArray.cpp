#include <bits/stdc++.h>
using namespace std;
int search(vector<vector<int>> arr, int row, int col, int key){
    int s, e, mid;
    for (int i = 0; i < arr.size(); i++){
        s = 0, e = col-1;
        if ( key >= arr[i][s] && key <= arr[i][e] ){
            mid = (s+e)/2;
            while ( s <= e ){
                if ( key == arr[i][mid] ) return 1;
                else if ( key < arr[i][mid] ) e = mid-1;
                else s = mid+1;
                mid = (s+e)/2;
            }
        }
    }
    return -1;
}
int main(){
    vector<vector<int>> arr = {{  2,  6, 10, 14,18},
                               { 20, 24, 27, 29,38},
                               { 47, 52, 78, 93,102},
                               {108,111,200,218,320}};
    int row = 4, col = 5;
    int key = 320;
    int ans = search(arr, row, col, key);
    cout << ans << endl;
    return 0;
}