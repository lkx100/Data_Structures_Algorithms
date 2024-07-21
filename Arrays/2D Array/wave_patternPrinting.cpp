#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4] ={{3,6,4,2},
                    {4,8,11,5},
                    {9,3,12,1},
                    {17,8,5,9}};
    int row = 4, col = 4;
    for (int i = 0; i < col; i++)
    {
        if ( i % 2 == 0 ){
            for (int j = 0; j < row; j++)
            cout << arr[j][i] << " ";
        }
        else {
            for (int j = row-1; j >= 0; j--)
            cout << arr[j][i] << " ";
        }
    }
    // expected --> 3 4 9 17 8 3 8 6 4 11 12 5 9 1 5 2
    // got      --> 3 4 9 17 8 3 8 6 4 11 12 5 9 1 5 2 
    return 0;
}