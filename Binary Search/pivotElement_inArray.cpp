#include <bits/stdc++.h>
using namespace std;
int rightSum(int arr[], int start, int end){
    int sum = 0;
    for (int i = start; i < end; i++) sum += arr[i];
    return sum;
}
int leftSum(int arr[], int start, int end){
    int sum = 0;
    for (int i = start; i < end; i++) sum += arr[i];
    return sum;
}
int pivotIndex(int arr[], int size){
    int e = size-1;
    int s = 0;
    int mid = s + (e-s)/2;
    while ( s <= e ){
        int left = leftSum(arr, 0, mid);
        int right = rightSum(arr, mid+1, size);
        if ( right == left )  return mid;
        if ( right < left )  e = mid-1;
        if ( right > left )  s = mid+1;
        mid = s + (e-s)/2;
    }
    return -1;
}
int main(){
    int arr[7] = {-1,1,-1,0,-1,1,-1};
    int ans = pivotIndex(arr, 7);
    cout << "Pivot Index is " << ans << endl;
    return 0;
}