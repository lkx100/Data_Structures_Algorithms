#include <bits/stdc++.h>
using namespace std;
void sortStringBruteForce ( string& sentence ){    // ** O(N^2) **
    for (int i = 0; i < sentence.size(); i++){
        bool swapping = 0;
        for (int j = 0; j < sentence.size()-1; j++){
            if ( sentence[j] > sentence[j+1] ){
                swap ( sentence[j], sentence[j+1] );
                swapping = 1;
            }
        }
        if ( swapping == 0 ) break;
    }
}
void sortStrings ( string sentence ){   // ** O(N) **
    string ans;
    int arr[26] = {0}, index;
    for (int i = 0; i < sentence.size(); i++){
        index = sentence[i] - 97;
        arr[index]++;
    }
    for (int i = 0; i < 26; i++){
        char c = i + 97;
        while ( arr[i]-- ){
            ans += c;
        }
    }
    cout << "After Sorting : " << ans << "\n\n";
}
int main(){

    string s = "kumar";

    cout << "\nBefore Sorting : " << s << endl;
    //sortStringBruteForce ( s );
    //cout << "After Soring : " << s << "\n" << endl;
    sortStrings ( s );

    return 0;
}