/* 
# No Sorting
# Finding Permutations
# Binary Search
*/
#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int books, int M, int mid){
    if ( M > books ) return false; // total students > total books
    int pageSum = 0, student = 1;
    for (int i = 0; i < books; i++){
        if ( arr[i] + pageSum <= mid ){
            pageSum += arr[i];
        }
        // for next student
        else {
            pageSum = 0;
            student++;
            if ( student > M || arr[i] > mid ) return false;
            pageSum = arr[i];
        }
    }
    return true;
}
int minAllocation(int arr[], int books, int M){
    int start = 0, sum = 0, ans = -1;
    for(int i = 0; i < books; i++) sum += arr[i];
    int end = sum;
    int mid = start + (end-start)/2;
    while ( start <= end ){
        if ( isPossible(arr, books, M, mid) ){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int books = 4;
    int arr[books] = {10,20,30,40}; // no of Books containg no of pages
    int M = 2; // no of students
    int ans = minAllocation(arr, books, M);
    cout << "Minimum Allocation should be " << ans << endl;
    return 0;
}