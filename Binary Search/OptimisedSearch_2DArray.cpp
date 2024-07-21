#include <bits/stdc++.h>
using namespace std;
int search(vector<vector<int>> arr, int key){
    int row_index, col_index;
    int s = 0, e = (arr.size()*arr[0].size())-1;
    int mid = (s+e)/2;
    while ( s <= e ){
        row_index = mid / (arr[0].size());
        col_index = mid % (arr[0].size());
        if ( key == arr[row_index][col_index] ) return 1;
        else if ( key < arr[row_index][col_index] ) e = mid-1;
        else s = mid+1;
        mid = (s+e)/2;
    }
    return -1;
}
int main(){
    vector<vector<int>> arr = {{  1,  3, 5, 7},
                               { 10, 11, 16, 20},
                               { 23, 30, 78, 34,60}};

    int key = 3;

    cout << search(arr, key) << endl;

    return 0;
}