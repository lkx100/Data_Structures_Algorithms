#include <bits/stdc++.h>
using namespace std;
void diagonalSum(int arr[][3], int r, int c)
{
    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ( i == j ) diag1 += arr[i][j];
            if ( i+j == r-1 ) diag2 += arr[i][j];
        }
    }
    cout << "Sum of elements in diagonal 1 is " << diag1 << " & " << "diagonal 2 is " << diag2;
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    diagonalSum(arr, 3, 3);
    return 0;
}