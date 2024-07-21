#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,0,1,0,0,1,0};
    int start = 0, end  = arr.size()-1;
    while ( start < end ){
        if ( arr[start] == 0 ){
            start++;
        }
        if ( arr[start] == 1 ) { 
            if ( arr[end] == 0 ){
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else {
                end--;
            }
        }
    }
    
    for (int i : arr)
    cout << i << " ";
    
    return 0;
}