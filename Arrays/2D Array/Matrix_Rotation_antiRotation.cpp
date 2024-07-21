#include <bits/stdc++.h>
using namespace std;
void antiClockwise(vector<vector<int>>& arr, int k){
    if ( k == 0 ) return;
    int start, end;
    // transpose 
    for (int i = 1; i < arr.size(); i++){
        for (int j = 0; j < i; j++)
            swap(arr[i][j], arr[j][i]);
    }
    // swap columns
    for (int i = 0; i < arr.size(); i++){
        start = 0, end = arr.size()-1;
        while ( start < end ){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    // call k times
    return antiClockwise(arr, k-1);
}
int main(){
    int k, anti;
    cin >> k;
    // ACW if K1 = 1 ===> CW K2 = 3
    // ACW if K1 = 2 ===> CW K2 = 2
    // ACW if K1 = 3 ===> CW K2 = 1
    // ACW if K1 = 4 ===> CW K2 = 0
    // ACW if K1 = 5 = 1 ===> CW K2 = 3
    // ACW if K1 = 6 = 2 ===> CW K2 = 2
    anti = 4 - (k % 4);
    vector<vector<int>> arr = {{ 1, 2, 3, 4},
                               { 5, 6, 7, 8},
                               { 9,10,11,12},
                               {13,14,15,16}};
    antiClockwise(arr, anti);
    
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    

    return 0;
}