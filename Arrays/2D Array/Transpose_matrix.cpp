#include <bits/stdc++.h>
using namespace std;
void swaping(vector<vector<int>>& arr){
    for (int i = 1; i < arr.size(); i++ ){
        for (int j = 0; j < i; j++){
            arr[j][i] = (arr[j][i]+arr[i][j]) - (arr[i][j] = arr[j][i]);
            // OR
            // arr[i][j] = arr[i][j] ^ arr[j][i];
            // arr[j][i] = arr[i][j] ^ arr[j][i];
            // arr[i][j] = arr[i][j] ^ arr[j][i];
        } 
    }
}
int main(){
    vector<vector<int>> arr = {{1,1,1,1},
                               {2,2,2,2},
                               {3,3,3,3},
                               {4,4,4,4}};
    
    swaping( arr );

    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}