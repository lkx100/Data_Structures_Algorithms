#include <iostream>
using namespace std;
bool check(int array[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if ( key == array[i] ) return 1;
    }
    return 0;
}

int main(){
    int key;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Enter the key you are searching for : ";
    cin >> key;
    bool found = check(arr,10,key);
    if (found) cout << "Found" << endl;
    else cout << "NOT Found" << endl;
    return 0;
}