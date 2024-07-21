#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key){
  int mid = (start + end) / 2;

  if (start > end) return false;
  
  if (arr[mid] == key) return true;

  else if (arr[mid] < key) 
    binarySearch(arr, mid+1, end, key);

  else
    binarySearch(arr, start, mid-1, key);

}

int main(){

  int arr[6] = {2,4,6,10,14,16};
  int size = 6;
  int start = 0, end = size-1;
  int key = 1;
  if (binarySearch(arr, start, end, key)) cout << "Found" << endl;
  else cout << "Not Found" << endl;
 
  return 0;
}