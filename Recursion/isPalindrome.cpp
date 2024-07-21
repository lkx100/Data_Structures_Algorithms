#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int i, int j) {

    if (i >= j) return true;

    if (s[i] != s[j]) return false;

    return isPalindrome(s, i+1, j-1);

}

int main(){

    string p = "Lucky";
    string q = "aabaa";
    int i = 0, j = q.size()-1;
    if (isPalindrome(q, i, j)) cout << "TRUE" << endl;
    else cout << "FALSE" << endl;
    // (isPalindrome(p, i, j)) ? "True" : "False";
    return 0;
}