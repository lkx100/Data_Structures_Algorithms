#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j){  

  if (i > j)
    return true;

  if (str[i] != str[j]) {
    return false;
  }
  else {
    checkPalindrome(str, i+1, j-1);
  }

}

int main(){
  
  string str = "aabaa";
  int i = 0, j = str.size()-1;
  if (checkPalindrome(str, i, j)) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}