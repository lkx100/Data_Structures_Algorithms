#include <bits/stdc++.h>
using namespace std;
int index(int arr[], int size, int target){
    int e = size-1, s = 0, ans = -1;
    int mid = s + (e-s)/2;
    while ( s <= e ){
        if ( arr[mid] == target ) return mid;
        if ( arr[mid] < target ){
            s = mid+1;
        }
        if ( arr[mid] > target ){
            e = mid-1;
            ans = mid;
        }
        if ( target > arr[size-1] ) ans = size;
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[8] = {1,3,5,6,7,9,11,20};
    int key = 8; 
    cout << "Index is " << index(arr,8,key);
    return 0;
}