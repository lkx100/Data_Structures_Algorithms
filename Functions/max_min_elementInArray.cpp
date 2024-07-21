#include <iostream>
using namespace std;
int max(int array[], int a){
    int x = INT_MIN;
    for (int i = 0; i < a; i++)
    {
        if ( x < array[i] ) x = array[i];
    }
    return x;
}
//----------------------------------------------//
int min(int array[], int b){
    int x = INT_MAX;
    for (int i = 0; i < b; i++)
    {
        if ( x > array[i] ) x = array[i];
    }
    return x;
}
//----------------------------------------------//
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Max element is " << max(arr,n) <<" & Min element is " << min(arr,n) << endl;
    return 0;
}