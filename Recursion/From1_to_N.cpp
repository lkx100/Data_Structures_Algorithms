#include <bits/stdc++.h>
using namespace std;

void printNum(int n){
  
  if (n == 2){
    cout << 2 << " ";
    return;
  }
  printNum(n-1);
  if (n % 2 == 0){
    cout << n << " ";
  }
}

int main(){
  int n;
  cin >> n;
  printNum(n);
  cout << endl;
  return 0;
}