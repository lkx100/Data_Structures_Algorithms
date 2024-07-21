#include <bits/stdc++.h>
using namespace std;

void reverseName(string &name, int i, int j){
  
  if (i > j) return;
  else {
    swap (name[i], name[j]);
    i++;
    j--;
  }
  
  reverseName(name, i, j);

}

int main(){

  string name = "Lucky";
  int i = 0, j = name.size()-1;
  reverseName(name, i, j);
  cout << name << endl;

  return 0;
}