#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{ 1, 2, 3, 4},
                               { 5, 6, 7, 8},
                               { 9,10,11,12},
                               {13,14,15,16}};

    int start, end;
    
    // transpose matrix
    for (int i = 1; i < arr.size(); i++){
        for (int j = 0; j < i; j++)
            swap(arr[i][j], arr[j][i]);
    }
    
    // swapping columns of this transposed matrix
    for (int i = 0; i < arr.size(); i++){
        start = 0, end = arr.size()-1;
        while ( start < end ){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    // print matrix
    for ( int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}