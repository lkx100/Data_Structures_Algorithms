#include <bits/stdc++.h>
using namespace std;
void rotateClockwise(string &s, int k){
    char c = s[s.size()-1];
    for (int i = s.size()-2; i >= 0; i--){
        s[i+1] = s[i];
    }
    s[0] = c;

    if ( k == 1 ) return;
    return rotateClockwise(s, k-1);
}
void rotateAnticlockwise(string &s, int k){
    char c = s[0];
    for (int i = 1; i < s.size(); i++){
        s[i-1] = s[i]; 
    }
    s[s.size()-1] = c;

    if ( k == 1 ) return;
    return rotateAnticlockwise(s, k-1);
}
int main(){

    string s1 = "Lucky";
    string s2 = "Lucky";
    int k = 2;
    //cin >> k;
    rotateAnticlockwise(s1, k);
    cout << s1;
    cout << endl;
    rotateClockwise(s2, k);
    cout << s2;

    return 0;
}