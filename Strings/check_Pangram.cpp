#include <bits/stdc++.h>
using namespace std;
int bruteForcePangram ( string ch ){  // My Approach
    int ascii = 122, x, a, count = 0;
    while ( ascii >= 97 ){
        a = 0;
        for (int i = 0; i < ch.size(); i++){
            x = (int)ch[i];
            if ( ascii == x ) a = 1;
        }
        if ( a != 1 ) break;
        count++;
        ascii--;
    }
    if ( count == 26 ) return 1;
    else return 0;
}

//  a = 0 --> 97 - 97 = 0
//  b = 1 --> 98 - 97 = 1
//  c = 2 --> 99 - 97 = 2

int isPangram ( string ch ){   // Optimized Approach
    bool alphabet[26] = {0};
    int i = -1;
    for (int i = 0; i < ch.size(); i++)
        alphabet[((int)ch[i])-97] = 1;
    
    for (int i = 0; i < 26; i++)
        if ( alphabet[i] == 0 ) return 0;
    
    return 1;
}
int main(){

    string sentence = "abcdefg hijklmnopqrstuvwxyz";
    // string sentence = "";
    // if ( bruteForcePangram(sentence) ) cout << "PANGRAM";
    // else cout << "NOT a Pangram";

    if ( isPangram(sentence) ) cout << "PANGRAM";
    else cout << "NOT a Pangram";

    return 0;
}