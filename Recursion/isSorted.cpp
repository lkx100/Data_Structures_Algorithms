#include <bits/stdc++.h>
using namespace std;

// ***Using Loop***
// bool isSorted(int arr[], int s){
//   bool sorted = 1;
//   for (int i = 0; i < s-1; i++){
//     if (arr[i] > arr[i+1]){
//       sorted = 0; 
//       break;
//     }
//   }
//   return sorted;
// }

// ***Using Recursion***
bool isSorted(int arr[], int size){
  // base case : if 1 or 0 elements are in array -> means no need sort
  if (size < 2) return true;

  if (arr[0] > arr[1]) return false;
  else return isSorted(arr+1, size-1);
  
}

int main(){
  int arr[6] = {2,4,6,9,11,13};
  if (isSorted(arr, 6)) cout << "Sorted" << endl;
  else cout << "Not Sorted" << endl;
  return 0;
}