#include <bits/stdc++.h>
using namespace std;

int fibo(int a){

  if ( a < 2 ) return a;

  return fibo(a-1) + fibo(a-2);

}

int main(){
  int nthTerm;
  cin >> nthTerm;
  for (int i = 0; i <= nthTerm; i++)
    cout << fibo(i) << " " << endl;
  return 0;
}