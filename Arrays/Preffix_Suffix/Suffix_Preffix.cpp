#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {6,4,5,-3,2,8};
    int sum = 0;
    // ****preffix****
    // for (int i = 0; i < arr.size(); i++){
    //     sum += arr[i];
    //     arr[i] = sum;
    // }
    // ****suffix****
    for (int i = arr.size()-1; i >= 0; i--)
    {
        sum += arr[i];
        arr[i] = sum;   
    }
    
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    
    return 0;
}