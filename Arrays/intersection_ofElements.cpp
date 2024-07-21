#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    vector<int> ans;
    int i = 0, j = 0, n, m;
    int arr1[n], arr2[m];
    while (i < n && j < m)
    {
        if( arr1[i] < arr2[j] ) i++;

        if( arr1[i] == arr2[j] ){
            ans.push_back(arr1[i]); // Or use cout
            i++;
            j++;
        }

        if( arr1[i] > arr2[j] ) j++;
    }
    
    return 0;
}