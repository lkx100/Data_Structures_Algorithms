#include <bits/stdc++.h>
using namespace std;
void swapArray(vector<int> &arr) {
  for (int i = 1; i < arr.size(); i++) {
    for (int j = i; j > 0; j--) {
      if (arr[j] < arr[j - 1])
        swap(arr[j], arr[j - 1]);
      else
        break;
    }
  }
}
void print(vector<int> &arr) {
  for (int i : arr)
    cout << i << " ";
}
int main() {

  vector<int> arr = {10, 8, 1, 2, 5, 0};
  print(arr);

  cout << endl;
  swapArray(arr);

  print(arr);

  return 0;
}
