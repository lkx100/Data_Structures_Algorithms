#include <bits/stdc++.h>
using namespace std;
// int Max(int arr[], int s, int e){
//     int min = INT_MIN;
//     for (int i = s; i <= e; i++){
//         if ( min < arr[i] )  min = arr[i];
//     }
//     return min;
// }
int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    // O ( N*N )
    // int count = 0, mini, ans;
    // for (int i = 1; i < 7; i++)
    // {
    //     // mini = min ( left , right );
    //     mini = min(Max(height, 0, i-1), Max(height, i+1, 7));
    //     ans = mini - height[i];
    //     if ( ans >= 0 ) count += ans;
    // }
    // cout << count << endl;
    // ************************************
    // optimised --> O ( N ) 
    int water = 0, maxi = INT_MIN, point;
    // total max height == maxi
    for (int i = 0; i < height.size(); i++){
        if ( maxi < height[i] ){
            maxi = height[i];
            point = i;
        }
    }
    // from start i = 0 till maxi
    int leftmax = 0, ans, mini = 0;
    for (int i = 0; i <= point; i++)
    {
        leftmax = max(leftmax, height[i]);
        mini = min(leftmax, maxi);
        ans = mini - height[i];
        if ( ans >= 0 ) water += ans;
    }
    // from end to maxi 
    leftmax = maxi;
    int rightmax = 0;
    for (int i = height.size()-1; i >= point; i--)
    {
        rightmax = max(rightmax, height[i]);
        mini = min(leftmax, rightmax);
        ans = mini - height[i];
        if ( ans >= 0 ) water += ans;
    }
    cout << water << endl;
    return 0;
}