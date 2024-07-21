#include<bits/stdc++.h>
using namespace std;
int mountain(int arr[], int size){
    int e = size-1;
    int s = 0;
    int mid = s + (e-s)/2;
    while ( s < e ){
        if ( arr[mid] < arr[mid+1] ){
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return mid;
}
int main(){
    int arr[7] = {1,2,3,4,3,2,1};
    cout << "Index of Peak element in Mountain array is " << mountain(arr, 7) << endl;
    return 0;
}