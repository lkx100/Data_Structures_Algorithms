#include <bits/stdc++.h>
using namespace std;
int main(){

    string st = "Lucky";

    int s = 0, e = st.size()-1, count = 0;

    while ( s < e ){
        swap(st[s], st[e]);
        s++, e--;
    }

    cout << "Reverse of \"Lucky\" is \"" << st << "\"" << endl;

    // for (int i = 0; i < st.size(); i++){
    //     if ( st[i] != '\0' ) 
    //         count++;
    // }
    // ! OR
    while ( st[count] != '\0' ){
        count++;
    }
    cout << "Size of st is " << count;

    return 0;
}