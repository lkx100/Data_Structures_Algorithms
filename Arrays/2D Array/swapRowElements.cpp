#include <bits/stdc++.h>
using namespace std;
void afterSwapping(int arr[][4], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        int s = 0, e = c-1;
        while ( s < e )
        {
            // swap 2 elements of array 
            // b = ( a + b ) - ( a = b )
            arr[i][e] = ( arr[i][s]+arr[i][e] ) - ( arr[i][s] = arr[i][e] );
            s++;
            e--;
        }   
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[3][4] ={{2,3,4,5},
                    {1,2,6,8},
                    {4,9,3,2}};
    afterSwapping(arr, 3, 4);
    return 0;
}