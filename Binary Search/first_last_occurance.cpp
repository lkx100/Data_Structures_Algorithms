#include <bits/stdc++.h>
using namespace std;
int lastSearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        if ( arr[mid] == key ){
            ans = mid;
            start = mid + 1;
        }
        if ( arr[mid] < key ){
            start = mid + 1;
        } 
        if ( arr[mid] > key ){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int firstSearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        if ( arr[mid] == key ){
            ans = mid;
            end = mid - 1;
        }
        if ( arr[mid] < key ){
            start = mid + 1;
        }
        if ( arr[mid] > key ){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int size = 6;
    int arr[size] = {1,2,3,3,3,3};
    int key;
    cout << "Enter key : ";
    cin >> key;
    int x = firstSearch(arr,size,key);
    int y = lastSearch(arr,size,key);
    cout << "Fisrt Occurence of " << key << " is in Index " << x << endl;
    cout << "Last Occurence of " << key << " is in Index " << y << endl;

    return 0;
}