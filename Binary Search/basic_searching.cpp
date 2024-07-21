#include <bits/stdc++.h>
using namespace std;
bool findKey(int arr[], int a, int k){
    for (int i = 0; i < a; i++)
    {
        if ( k == arr[i] ) return true;
    }
    return false;
}
int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int key;
    cout<< "Enter key you want to find : ";
    cin>> key;
    bool check = findKey(arr,size,key);
    cout << check ;
    return 0;
}