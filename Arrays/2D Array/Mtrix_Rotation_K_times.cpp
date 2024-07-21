#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<vector<int> >& arr, int k){
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
    return rotate(arr, k-1);
}
int main(){
    vector<vector<int> > arr = {{ 1, 2, 3, 4},
                               { 5, 6, 7, 8},
                               { 9,10,11,12},
                               {13,14,15,16}};
    int k;
    cin >> k;
    rotate(arr, (k%4));
    // print matrix
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}