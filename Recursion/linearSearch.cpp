#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int key){
  
  if (size == 0) return false;  // array khatam hone par bhi key not found : size is 0
  else if (arr[0] == key) return true;  // checking 1st element for every new recursive array
  
  return linearSearch(arr+1, size-1, key);

}

int main(){
  int arr[7] = {1,2,3,4,5,6,7};
  int size = 7;
  int key = 1;
  if (linearSearch(arr, size, key)) cout << "YESS" << endl;
  else cout << "NO" << endl;
  return 0;
}