#include <bits/stdc++.h>
using namespace std;

int sum = 0;
int findSum(int arr[], int size){
  if (size == 0){
    sum += arr[size];
    return sum;
  }
  sum += arr[size];
  findSum(arr, size-1);
}
int main(){
  int arr[5] = {3,4,5,8,2};
  int size = 5;
  cout << findSum(arr, size-1) << endl;
  return 0;
}