#include <bits/stdc++.h>
using namespace std;
int searchIn(int arr[], int size){
    int s = 0, e = size-1, ans = arr[0];
    int mid = s + (e-s)/2;
    while ( s <= e ){
        // left sorted
        if ( arr[0] <= arr[mid] ){
            s = mid+1;
        }
        // right sorted
        if ( arr[0] > arr[mid] ){
            ans = arr[mid];
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;   
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int ans = searchIn(arr, 6);
    cout << arr[ans] << endl;
    return 0;
}