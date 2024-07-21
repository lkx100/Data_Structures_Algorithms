#include <bits/stdc++.h>
using namespace std;
// ***Bubble Sort***
// void sort(int arr[], int n){
//   for (int i = 1; i < n; i++){
//     bool swapping = 0;
//     for (int j = 0; j < n-i; j++){
//       if (arr[j] > arr[j+1]){
//         int temp = arr[j];
//         arr[j] = arr[j+1];
//         arr[j+1] = temp;
//         swapping = 1;
//       }
//     }
//     if (swapping == 0) break;
//   }
// }

// ***RECURSIVE Bubble Sort***
void sort(int arr[], int n){
  if (n == 0 || n == 1)  return;

  // task 1 completed to send 1st largest element to its last position
  for (int i = 0; i < n-1; i++){
    if (arr[i] > arr[i+1]){
      swap(arr[i], arr[i+1]);  
    }
  }
  // rest elements will be sent by recursive call
  sort(arr, n-1);
  
}

int main(){
  int arr[7] = {4,2,5,3,5,6,1};
  sort(arr, 7);
  for (auto i : arr){
    cout << i << " ";
  }
  return 0;
}