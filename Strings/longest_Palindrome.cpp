#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(string s) {
        int upper[26] = {0}, lower[26] = {0};
        int count = 0, odd = 0;
        for (int i = 0; s[i] != '\0'; i++){
            // string iteration frequency
            if ( s[i] >= 'a' )
                lower[ s[i] - 'a' ]++;
            // string iteration frequency
            else 
                upper[ s[i] - 'A' ]++;
        }
        // upper & lower iteration for counting palindrome
        for (int i = 0; i < 26; i++){
            // lower
            if ( lower[i] % 2 == 0 )
                count += lower[i];
            else{
                count += lower[i] - 1;
                odd = 1;
            }
            // upper
            if ( upper[i] % 2 == 0 )
                count += upper[i];
            else{
                count += upper[i] - 1;
                odd = 1;
            }
        }
        return odd + count;
    }
int main(){
    string ch;
    cin >> ch;
    cout << "Longest Palindrome = " << longestPalindrome( ch ) << endl;
    return 0;
}