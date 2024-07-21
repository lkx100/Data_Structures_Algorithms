#include <iostream>
using namespace std;
int maxArray(int arr[], int size){
    int mx, count = INT32_MIN;
    for (int i = 0; i < size; i++){
        count = max(count,arr[i]);   // Inbuilt function
        // if ( count < arr[i] ){
        //     mx = arr[i];
        //     count = arr[i];
        // }
    }
    //return mx;
    return count;
}
int minArray(int arr[], int size){
    int mn, count = INT32_MAX;
    for (int i = 0; i < size; i++){
        count = min(count,arr[i]);  // Inbuilt function
        // if ( count > arr[i] ){
        //     mn = arr[i];
        //     count = arr[i];
        // }
    }
    //return mn;
    return count;
}
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Now enter elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    cout << endl;
    cout << "Minimum element is " << minArray(arr,n) << endl;
    cout << "Maximum element is " << maxArray(arr,n) << endl;
    return 0;
}