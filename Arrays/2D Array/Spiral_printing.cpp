#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<vector<int>> arr ={{1,  2, 3, 4, 5, 6},
                              {7,  8, 9,10,11,12},
                              {13,14,15,16,17,18},
                              {19,20,21,22,23,24},
                              {25,26,27,28,29,30},
                              {31,32,33,34,35,36}};

    int topRow = 0, bottomRow = arr.size()-1;
    int leftCol = 0, rightCol = arr[0].size()-1;

    int totalElement = arr.size() * arr[0].size();
    int count = 0;

    while ( count < totalElement )
    {
        for (int i = leftCol; i <= rightCol; i++){
            cout << arr[topRow][i] << " ";
            count++;
        }
        topRow++;
        if ( count >= totalElement ) break;

        for (int i = topRow; i <= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
            count++;
        }
        rightCol--;
        if ( count >= totalElement ) break;

        for (int i = rightCol; i >= leftCol; i--){
            cout << arr[bottomRow][i] << " ";
            count++;
        }
        bottomRow--;
        if ( count >= totalElement ) break;

        for (int i = bottomRow; i >= topRow; i--){
            cout << arr[i][leftCol] << " ";
            count++;
        }
        leftCol++;
        if ( count >= totalElement ) break;
    }

    // expected --> 1 2 3 4 5 6 12 18 24 30 36 35 34 33 32 31 25....21
    
    return 0;
}