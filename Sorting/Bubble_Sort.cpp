#include <bits/stdc++.h>
using namespace std;

void swapArray(vector<int>& arr){
  for (int i = 0; i < arr.size(); i++){
    bool swapping = 0;
      for (int j = 0; j < arr.size()-1; j++){
        if ( arr[j] > arr[j+1] ){
          swap(arr[j], arr[j+1]);
          // arr[j+1] = (arr[j]+arr[j+1]) - (arr[j]=arr[j+1]);
          swapping = 1;
        }
      }
    if ( swapping == 0 ) break;
  }
}
void print(vector<int>& arr){
  for (auto i : arr)
    cout << i << " ";
}

int main(){

  vector<int> arr = {10,8,3,1,2,5};

  print(arr);

  cout << endl;

  swapArray(arr);
  print(arr);

  return 0;
}
