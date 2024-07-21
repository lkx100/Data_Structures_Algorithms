#include <bits/stdc++.h>
using namespace std;

int exp(int base, int power){

  if (power == 0) return 1;
  if (power == 1) return base;

  if (power % 2 == 0){
    return exp(base, power/2)* exp(base, power/2);
  }

  else {
    return base * exp(base, power/2)* exp(base, power/2);
  }

}

int main(){
  int base, power;
  cin >> base >> power;
  cout << exp(base, power) << endl;
  return 0;
}