#include <bits/stdc++.h>
using namespace std;
int findIndex(int arr[][4], int r, int c)
{
    int min = INT_MIN, ans = -1;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
            sum += arr[i][j];
        if ( sum > min ){
            min = sum;
            ans = i;
        }
    }
    return ans;
}
int main(){
    int arr[5][4] ={{3,4,7,18}, 
                    {2,8,3,9},
                    {5,4,2,2},
                    {7,3,0,8},
                    {2,8,9,1}};
    
    cout << "Max sum row index is " << findIndex(arr,5,4) << endl;
    
    return 0;
}