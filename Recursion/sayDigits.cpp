#include <bits/stdc++.h>
using namespace std;

void digit(int t){

  string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
  cout << arr[t] << endl;

}

void sayDigits(int t){
  int rem = t / 10;
  int read = t % 10;

  if (rem == 0){
    digit(read);
    return;
  }

  sayDigits(rem);
  digit(read);
} 

int main(){

  int num;
  cin >> num;
  sayDigits(num);

  return 0;
}